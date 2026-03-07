__int64 __fastcall PiCMDeleteObject(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r12
  PVOID **v9; // rdi
  int v10; // ebx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // rcx
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h]
  __int64 v17; // [rsp+50h] [rbp-10h]

  v6 = a6;
  v17 = 0LL;
  *a6 = 0;
  v9 = 0LL;
  v15 = 0LL;
  a6 = 0LL;
  v16 = 0LL;
  v10 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v15);
  if ( v10 >= 0 )
  {
    if ( !PiAuDoesClientHaveAccess(2u) )
    {
      v11 = -1073741790;
LABEL_16:
      v10 = PiCMReturnBasicResultData(v11, v17, a3, a4, v6);
      goto LABEL_17;
    }
    if ( !(_QWORD)v16 || DWORD1(v15) || HIDWORD(v16) || !a3 || (v12 = 8, a4 < 8) )
    {
LABEL_15:
      v11 = -1073741811;
      goto LABEL_16;
    }
    if ( SDWORD2(v15) > 6 )
    {
      if ( DWORD2(v15) == 65537 )
      {
        v12 = 7;
      }
      else if ( DWORD2(v15) != 65538 )
      {
        switch ( DWORD2(v15) )
        {
          case 0x10003:
            v12 = 9;
            break;
          case 0x10004:
            v12 = 10;
            break;
          case 0x10005:
            v12 = 11;
            break;
          default:
            goto LABEL_15;
        }
      }
      if ( !PiDrvDbCtx )
        goto LABEL_15;
      if ( v12 - 5 < 2 )
        goto LABEL_36;
    }
    else
    {
      switch ( DWORD2(v15) )
      {
        case 6:
        case 1:
          goto LABEL_36;
        case 2:
          v12 = 2;
          break;
        case 3:
          v12 = 4;
          break;
        default:
          if ( (unsigned int)(DWORD2(v15) - 4) >= 2 )
            goto LABEL_15;
LABEL_36:
          v11 = -1073741637;
          goto LABEL_16;
      }
    }
    v11 = PiPnpRtlBeginOperation((__int64 **)&a6);
    if ( v11 >= 0 )
      v11 = PnpDeleteObject(v14, v16, v12);
    v9 = (PVOID **)a6;
    goto LABEL_16;
  }
LABEL_17:
  PiCMReleaseObjectInputData((__int64)&v15);
  if ( v9 )
    PiPnpRtlEndOperation(v9);
  return (unsigned int)v10;
}
