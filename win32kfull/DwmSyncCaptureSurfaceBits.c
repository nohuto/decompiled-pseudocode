__int64 __fastcall DwmSyncCaptureSurfaceBits(
        PVOID Object,
        __int64 a2,
        float a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        __int64 a8,
        _DWORD *a9,
        unsigned __int64 *a10)
{
  int v13; // ebx
  _DWORD *v14; // rsi
  int v15; // eax
  unsigned __int64 *v16; // rcx
  _PORT_MESSAGE v18; // [rsp+38h] [rbp-59h] BYREF
  int v19; // [rsp+60h] [rbp-31h]
  double v20; // [rsp+64h] [rbp-2Dh]
  unsigned __int64 v21; // [rsp+6Ch] [rbp-25h]
  int v22; // [rsp+74h] [rbp-1Dh]
  int v23; // [rsp+78h] [rbp-19h]
  int v24; // [rsp+7Ch] [rbp-15h]
  __int64 v25; // [rsp+80h] [rbp-11h]
  __int64 v26; // [rsp+88h] [rbp-9h]
  __int64 v27; // [rsp+C8h] [rbp+37h] BYREF

  v13 = -1073741823;
  if ( Object )
  {
    v13 = DwmSyncLPCAllowed();
    if ( v13 >= 0 )
    {
      memset_0(&v18, 0, 0x58uLL);
      v21 = __PAIR64__(a5, a4);
      v14 = a9;
      v18.u2.s2.Type = 0x8000;
      v22 = a6;
      v23 = a7;
      v24 = *a9;
      v25 = a8;
      v18.u1.Length = 5767216;
      v19 = -2147483642;
      v20 = a3;
      v26 = a2;
      EtwUpdateEvent(0LL, 2147483654LL);
      v27 = 88LL;
      v15 = LpcSendWaitReceivePort(Object, 0x20000LL, &v18, &v18, &v27, 0LL);
      v13 = SyncLpcCheckNtStatus(v15, &v18);
      if ( v13 >= 0 && v18.u1.s1.DataLength == 20 )
      {
        if ( SLODWORD(v20) < 0 )
        {
          v13 = -1073741823;
        }
        else
        {
          v16 = a10;
          *v14 = HIDWORD(v20);
          *v16 = v21;
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v13;
}
