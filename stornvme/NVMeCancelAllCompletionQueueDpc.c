__int64 __fastcall NVMeCancelAllCompletionQueueDpc(__int64 a1, char a2)
{
  unsigned int v2; // edx
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // r8
  __int64 v7; // r8
  unsigned int v8; // eax
  char v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v2 = 0;
  v4 = *(_QWORD *)(a1 + 880);
  v5 = 0;
  v10 = 0;
  while ( v4 && v5 < *(unsigned __int16 *)(a1 + 338) )
  {
    v6 = v4 + 392LL * v5;
    if ( *(_BYTE *)(v6 + 248) )
      v7 = v6 + 264;
    else
      v7 = v6 + 24;
    v8 = StorPortExtendedFunction(95LL, a1, v7, &v10);
    v4 = *(_QWORD *)(a1 + 880);
    ++v5;
    v2 = v8;
  }
  return v2;
}
