__int64 __fastcall DwmSyncGetCompositionAttribute(PVOID Object, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // r15
  int v8; // ebx
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int16 v11; // ax
  int v12; // eax
  __int64 v14; // [rsp+30h] [rbp-69h] BYREF
  struct _PORT_MESSAGE v15; // [rsp+40h] [rbp-59h] BYREF
  int v16; // [rsp+68h] [rbp-31h]
  int v17; // [rsp+6Ch] [rbp-2Dh]
  __int64 v18; // [rsp+70h] [rbp-29h]
  int v19; // [rsp+78h] [rbp-21h]
  int v20; // [rsp+7Ch] [rbp-1Dh]
  __int128 Src; // [rsp+80h] [rbp-19h] BYREF
  __int64 v22; // [rsp+90h] [rbp-9h]

  v4 = a3;
  v8 = -1073741823;
  if ( Object )
  {
    v8 = DwmSyncLPCAllowed();
    if ( v8 >= 0 )
    {
      memset_0(&v15, 0, 0x58uLL);
      v9 = *(_OWORD *)a4;
      v10 = a4[2];
      *(ULONG *)((char *)&v15.u1.Length + 2) = -2147483560;
      v16 = 1073741867;
      v17 = 1;
      v18 = a2;
      v19 = v4;
      v11 = qword_1C03186D8[2 * v4];
      Src = v9;
      v15.u1.s1.DataLength = v11 + 24;
      v20 = qword_1C03186D8[2 * v4];
      v22 = v10;
      v14 = 88LL;
      v12 = LpcSendWaitReceivePort(Object, 0x20000LL, &v15, &v15, &v14, 0LL);
      v8 = SyncLpcCheckNtStatus(v12, &v15);
      if ( v8 >= 0 )
        memmove(a4, &Src, qword_1C03186D8[2 * v4]);
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v8;
}
