__int64 __fastcall HalpInterruptFindControllerAndLineState(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  __int64 Lines; // rdx
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  v9[0] = 0LL;
  v10 = 0;
  if ( (int)HalpInterruptGsiToLine(a1, v9) < 0 )
  {
    HalpInterruptSetProblemEx(0, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 628);
    result = 3221225485LL;
LABEL_10:
    *a2 = 0LL;
    goto LABEL_5;
  }
  v6 = HalpInterruptLookupController(LODWORD(v9[0]));
  if ( !v6 )
  {
    HalpInterruptSetProblemEx(0, 17, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 641);
LABEL_9:
    result = 3221226021LL;
    goto LABEL_10;
  }
  Lines = HalpInterruptFindLines(v9, &v10);
  if ( !Lines )
  {
    HalpInterruptSetProblemEx(v6, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 657);
    goto LABEL_9;
  }
  *a2 = v6;
  result = 0LL;
  v4 = *(_QWORD *)(Lines + 40) + 56LL * v10;
LABEL_5:
  *a3 = v4;
  return result;
}
