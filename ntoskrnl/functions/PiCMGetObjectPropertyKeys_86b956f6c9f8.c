__int64 __fastcall PiCMGetObjectPropertyKeys(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r13
  void *Pool2; // rdi
  int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ecx
  unsigned __int64 v13; // rsi
  unsigned int v14; // r10d
  unsigned __int64 v15; // rdx
  signed int ObjectPropertyKeys; // eax
  int v17; // eax
  int v19; // [rsp+20h] [rbp-60h]
  __int128 v20; // [rsp+50h] [rbp-30h] BYREF
  __int128 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+70h] [rbp-10h]

  v6 = a6;
  LODWORD(a6) = 0;
  *v6 = 0;
  v20 = 0LL;
  v22 = 0LL;
  Pool2 = 0LL;
  v21 = 0LL;
  v10 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v20);
  if ( v10 < 0 )
    goto LABEL_43;
  if ( !(_QWORD)v21 || DWORD1(v20) || HIDWORD(v21) || !a3 || a4 < 0x14 )
    goto LABEL_39;
  v11 = 6;
  if ( SDWORD2(v20) > 6 )
  {
    switch ( DWORD2(v20) )
    {
      case 0x10001:
        v11 = 7;
        break;
      case 0x10002:
        v11 = 8;
        break;
      case 0x10003:
        v11 = 9;
        break;
      case 0x10004:
        v11 = 10;
        break;
      case 0x10005:
        v11 = 11;
        break;
      default:
        goto LABEL_39;
    }
    if ( !PiDrvDbCtx )
      goto LABEL_39;
  }
  else
  {
    switch ( DWORD2(v20) )
    {
      case 6:
        break;
      case 1:
        v11 = 1;
        break;
      case 2:
        v11 = 2;
        break;
      case 3:
        v11 = 4;
        break;
      case 4:
        v11 = 3;
        break;
      case 5:
        v11 = 5;
        break;
      default:
LABEL_39:
        v14 = -1073741811;
        goto LABEL_40;
    }
  }
  v12 = 0;
  if ( a4 - 20 >= 0x14 )
    v12 = a4 - 20;
  if ( v12 )
  {
    v13 = v12;
    Pool2 = (void *)ExAllocatePool2(256LL, v12, 879783504LL);
    if ( !Pool2 )
    {
      v14 = -1073741670;
      goto LABEL_40;
    }
    v15 = v13 / 0x14;
  }
  else
  {
    LODWORD(v15) = 0;
  }
  LODWORD(a6) = v15;
  ObjectPropertyKeys = PnpGetObjectPropertyKeys(
                         *(__int64 *)&PiPnpRtlCtx,
                         v21,
                         v11,
                         0LL,
                         v19,
                         0,
                         (__int64)Pool2,
                         v15,
                         (__int64)&a6);
  v14 = ObjectPropertyKeys;
  if ( ObjectPropertyKeys >= 0 )
  {
    v17 = PiCMReturnBufferResultData(ObjectPropertyKeys, 20 * (int)a6, 0, Pool2, 20 * (int)a6, v22, a3, a4, v6);
    goto LABEL_41;
  }
LABEL_40:
  v17 = PiCMReturnBufferResultData(v14, 20 * (int)a6, 0, 0LL, 0, v22, a3, a4, v6);
LABEL_41:
  v10 = v17;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
LABEL_43:
  PiCMReleaseObjectInputData((__int64)&v20);
  return (unsigned int)v10;
}
