/*
 * XREFs of SecureDmaEnabler_MapMemory @ 0x1C007AB74
 * Callers:
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C007A6EC (SecureDmaEnabler_AllocateCommonBufferPage.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0052470 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall SecureDmaEnabler_MapMemory(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx
  int v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // edx
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // [rsp+30h] [rbp-49h] BYREF
  __int128 v16; // [rsp+40h] [rbp-39h] BYREF
  __int64 v17; // [rsp+50h] [rbp-29h]
  GUID v18; // [rsp+58h] [rbp-21h] BYREF
  __int128 v19; // [rsp+68h] [rbp-11h]
  __int128 v20; // [rsp+78h] [rbp-1h]
  __int64 v21; // [rsp+88h] [rbp+Fh]

  v4 = (__int64 *)(a1 + 8);
  v15 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  LODWORD(v17) = 0;
  v19 = 0LL;
  v20 = 0LL;
  v16 = 0LL;
  if ( *a2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*v4 + 72),
        (_DWORD)a2,
        18,
        12,
        (__int64)&WPP_bc1ad2459c543d2ca8270d8dd36787fb_Traceguids);
    }
    v7 = -1073741637;
  }
  else
  {
    v8 = VslCreateSecureSection(&v15, *(_QWORD *)(*v4 + 624), a2, 4LL, 1);
    v7 = v8;
    if ( v8 >= 0 )
    {
      *((_QWORD *)&v19 + 1) = *(_QWORD *)(a1 + 16);
      *((_QWORD *)&v20 + 1) = v15;
      v13 = *v4;
      LODWORD(v20) = 5;
      LODWORD(v21) = 4096;
      v7 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v13 + 112), &v18, 56, (__int64)&v16, 24);
      if ( v7 >= 0 )
      {
        if ( (int)v16 >= 0 )
        {
          *(_DWORD *)(a4 + 12) = 0;
          *(_QWORD *)a4 = *((_QWORD *)&v16 + 1);
          *(_QWORD *)(a4 + 16) = v17;
          *(_QWORD *)(a4 + 24) = v15;
          *(_DWORD *)(a4 + 8) = 4096;
          return (unsigned int)v7;
        }
        v7 = v16;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*v4 + 72),
            v14,
            18,
            14,
            (__int64)&WPP_bc1ad2459c543d2ca8270d8dd36787fb_Traceguids,
            v16);
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*v4 + 72),
        v9,
        18,
        13,
        (__int64)&WPP_bc1ad2459c543d2ca8270d8dd36787fb_Traceguids,
        v8);
    }
  }
  if ( v15 )
  {
    v10 = VslDeleteSecureSection(v15);
    if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*v4 + 72),
        v11,
        18,
        15,
        (__int64)&WPP_bc1ad2459c543d2ca8270d8dd36787fb_Traceguids,
        v10);
    }
  }
  return (unsigned int)v7;
}
