/*
 * XREFs of SecureDmaEnabler_MapMemory @ 0x1C0077404
 * Callers:
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C0076F7C (SecureDmaEnabler_AllocateCommonBufferPage.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C004F688 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall SecureDmaEnabler_MapMemory(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // r9d
  __int64 v10; // rax
  int v11; // eax
  int v12; // edx
  __int64 v14; // [rsp+30h] [rbp-29h] BYREF
  __int128 v15; // [rsp+38h] [rbp-21h] BYREF
  __int64 v16; // [rsp+48h] [rbp-11h]
  GUID v17; // [rsp+50h] [rbp-9h] BYREF
  __int128 v18; // [rsp+60h] [rbp+7h]
  __int128 v19; // [rsp+70h] [rbp+17h]
  __int64 v20; // [rsp+80h] [rbp+27h]

  v14 = 0LL;
  v17 = 0LL;
  v20 = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  v15 = 0LL;
  if ( *a2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        (_DWORD)a2,
        18,
        12,
        (__int64)&WPP_bc1ad2459c543d2ca8270d8dd36787fb_Traceguids);
    }
    v6 = -1073741637;
    goto LABEL_15;
  }
  v7 = VslCreateSecureSection(&v14, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 576LL), a2, 4LL, 1);
  v6 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v9 = 13;
    goto LABEL_8;
  }
  *((_QWORD *)&v18 + 1) = *(_QWORD *)(a1 + 16);
  *((_QWORD *)&v19 + 1) = v14;
  v10 = *(_QWORD *)(a1 + 8);
  LODWORD(v19) = 5;
  LODWORD(v20) = 4096;
  v6 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v10 + 112), &v17, 56, (__int64)&v15, 24);
  if ( v6 >= 0 )
  {
    LOBYTE(v7) = v15;
    if ( (int)v15 >= 0 )
    {
      *(_DWORD *)(a4 + 12) = 0;
      *(_QWORD *)a4 = *((_QWORD *)&v15 + 1);
      *(_QWORD *)(a4 + 16) = v16;
      *(_QWORD *)(a4 + 24) = v14;
      *(_DWORD *)(a4 + 8) = 4096;
    }
    else
    {
      v6 = v15;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 14;
LABEL_8:
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v8,
          18,
          v9,
          (__int64)&WPP_bc1ad2459c543d2ca8270d8dd36787fb_Traceguids,
          v7);
      }
    }
LABEL_14:
    if ( v6 >= 0 )
      return (unsigned int)v6;
  }
LABEL_15:
  if ( v14 )
  {
    v11 = VslDeleteSecureSection(v14);
    if ( v11 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 3;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v12,
        18,
        15,
        (__int64)&WPP_bc1ad2459c543d2ca8270d8dd36787fb_Traceguids,
        v11);
    }
  }
  return (unsigned int)v6;
}
