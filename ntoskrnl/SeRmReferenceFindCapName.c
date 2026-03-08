/*
 * XREFs of SeRmReferenceFindCapName @ 0x1405B7318
 * Callers:
 *     AdtpBuildContextFromSecurityDescriptor @ 0x14066E690 (AdtpBuildContextFromSecurityDescriptor.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     SepRmReferenceFindCap @ 0x1405B7498 (SepRmReferenceFindCap.c)
 *     SepValidateCAPIDs @ 0x1405B75BC (SepValidateCAPIDs.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall SeRmReferenceFindCapName(PSID Sid1, _DWORD *a2, __int64 *a3)
{
  int v3; // edi
  __int64 v5; // rsi
  unsigned int v6; // r14d
  __int64 Pool2; // r15
  int v9; // ebp
  int Cap; // eax
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned __int16 **v13; // r8
  __int64 v14; // r9
  unsigned __int16 *v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // r12d
  char *i; // r14
  __int64 v19; // rbx
  unsigned __int16 v20; // cx
  __int64 result; // rax
  PSID v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+68h] [rbp+10h]
  __int64 *v24; // [rsp+70h] [rbp+18h]

  v24 = a3;
  v22 = Sid1;
  v3 = 0;
  v23 = 0LL;
  v5 = 0LL;
  v6 = 0;
  Pool2 = 0LL;
  v9 = SepValidateCAPIDs(Sid1, &v22);
  if ( v9 >= 0 )
  {
    Cap = SepRmReferenceFindCap(Sid1);
    v5 = v23;
    v9 = Cap;
    if ( Cap >= 0 )
    {
      v11 = *(_DWORD *)(v23 + 60);
      v12 = v11;
      if ( v11 )
      {
        v13 = (unsigned __int16 **)(v23 + 64);
        v14 = v11;
        do
        {
          v15 = *v13++;
          v16 = *v15;
          if ( v16 <= 2 )
            v16 = 0;
          v6 += v16;
          --v14;
        }
        while ( v14 );
      }
      Pool2 = ExAllocatePool2(256LL, v6 + 16 * v12, 1884513619LL);
      if ( Pool2 )
      {
        v17 = 0;
        for ( i = (char *)(Pool2 + 16LL * *(unsigned int *)(v5 + 60));
              v17 < *(_DWORD *)(v5 + 60);
              i += 2 * ((unsigned __int64)*(unsigned __int16 *)(Pool2 + 8 * v19) >> 1) )
        {
          v19 = 2LL * v17;
          *(_QWORD *)(Pool2 + 16LL * v17 + 8) = i;
          v20 = **(_WORD **)(v5 + 8LL * v17 + 64);
          if ( v20 <= 2u )
            v20 = 0;
          *(_WORD *)(Pool2 + 16LL * v17 + 2) = v20;
          *(_WORD *)(Pool2 + 16LL * v17) = v20;
          memmove(i, *(const void **)(*(_QWORD *)(v5 + 8LL * v17++ + 64) + 8LL), v20);
        }
      }
      else
      {
        v9 = -1073741801;
      }
    }
  }
  *v24 = Pool2;
  if ( v5 )
    v3 = *(_DWORD *)(v5 + 60);
  result = (unsigned int)v9;
  *a2 = v3;
  return result;
}
