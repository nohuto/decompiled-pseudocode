/*
 * XREFs of AVrfpSnapDllImports @ 0x1800DB2A0
 * Callers:
 *     AVrfpDllLoadNotificationInternal @ 0x1800DA6F0 (AVrfpDllLoadNotificationInternal.c)
 * Callees:
 *     LdrpPrepareImportAddressTableForSnap @ 0x180014F84 (LdrpPrepareImportAddressTableForSnap.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x180053EB8 (RtlGuardGrantSuppressedCallAccess.c)
 *     ZwProtectVirtualMemory @ 0x18009DEE0 (ZwProtectVirtualMemory.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

int __fastcall AVrfpSnapDllImports(__int64 a1)
{
  int result; // eax
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 *v6; // rdi
  __int64 *v7; // rax
  int v8; // r15d
  _QWORD *v9; // rbp
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // r13
  _QWORD *v13; // rsi
  __int64 v14; // rax
  __int64 *v15; // [rsp+30h] [rbp-118h]
  _QWORD *v16; // [rsp+38h] [rbp-110h]
  _QWORD v17[33]; // [rsp+40h] [rbp-108h] BYREF
  int v19; // [rsp+158h] [rbp+10h] BYREF
  ULONG OldProtect; // [rsp+160h] [rbp+18h] BYREF
  __int64 v21; // [rsp+168h] [rbp+20h]

  if ( !AVrfpEnabled )
    return -1073741790;
  memset(v17, 0, 0xC0uLL);
  v17[7] = a1;
  result = LdrpPrepareImportAddressTableForSnap((__int64)v17);
  if ( result >= 0 )
  {
    v3 = (__int64 *)v17[13];
    if ( v17[13] )
    {
      v4 = v17[14] >> 3;
      if ( (unsigned int)(v17[14] >> 3) )
      {
        v5 = (unsigned int)v4;
        v21 = (unsigned int)v4;
        do
        {
          if ( *v3 )
          {
            v6 = (__int64 *)AVrfpVerifierProvidersList;
            if ( (__int64 *)AVrfpVerifierProvidersList != &AVrfpVerifierProvidersList )
            {
              do
              {
                v7 = v6;
                v8 = 0;
                v6 = (__int64 *)*v6;
                v15 = v7;
                v9 = (_QWORD *)v7[5];
                v16 = v9;
                if ( *v9 )
                {
                  v10 = (_QWORD *)v7[5];
                  do
                  {
                    v11 = (_QWORD *)v10[3];
                    LODWORD(v12) = 0;
                    if ( *v11 )
                    {
                      v13 = (_QWORD *)v10[3];
                      do
                      {
                        if ( *v3 == v13[1] )
                        {
                          RtlGuardGrantSuppressedCallAccess(*v3, 1u, &v19);
                          v14 = v13[2];
                          if ( !v14 )
                          {
                            DbgPrint("AVRF: internal error: New thunk for %s is null. \n", (const char *)*v13);
                            __debugbreak();
                          }
                          *v3 = v14;
                          if ( (AVrfpDebug & 1) != 0 )
                            DbgPrint(
                              "AVRF: Snapped (%ws: %s) with (%ws: %p). \n",
                              *(_QWORD *)(a1 + 96),
                              *v13,
                              v15[3],
                              v13[2]);
                        }
                        v12 = (unsigned int)(v12 + 1);
                        v13 = &v11[3 * v12];
                      }
                      while ( *v13 );
                      v9 = v16;
                    }
                    v10 = &v9[4 * (unsigned int)++v8];
                  }
                  while ( *v10 );
                }
              }
              while ( v6 != &AVrfpVerifierProvidersList );
              v5 = v21;
            }
          }
          ++v3;
          v21 = --v5;
        }
        while ( v5 );
      }
      return ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&v17[13], &v17[14], v17[17], &OldProtect);
    }
    else
    {
      return 0;
    }
  }
  return result;
}
