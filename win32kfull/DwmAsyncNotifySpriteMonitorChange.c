__int64 __fastcall DwmAsyncNotifySpriteMonitorChange(PVOID Object, __int64 a2, __int128 *a3)
{
  unsigned int v6; // ebx
  __int128 v7; // xmm1
  __int64 v8; // xmm0_8
  __int128 v9; // xmm1
  int v11; // [rsp+28h] [rbp-29h] BYREF
  __int16 v12; // [rsp+2Ch] [rbp-25h]
  int v13; // [rsp+50h] [rbp-1h]
  __int64 v14; // [rsp+54h] [rbp+3h]
  __int128 v15; // [rsp+5Ch] [rbp+Bh]
  __int128 v16; // [rsp+6Ch] [rbp+1Bh]
  __int128 v17; // [rsp+7Ch] [rbp+2Bh]
  __int128 v18; // [rsp+8Ch] [rbp+3Bh]
  __int64 v19; // [rsp+9Ch] [rbp+4Bh]

  v6 = -1073741823;
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(SGDGetSessionState(Object) + 32) + 13248LL));
  if ( Object )
  {
    memset_0(&v11, 0, 0x7CuLL);
    v7 = a3[1];
    v15 = *a3;
    v11 = 8126548;
    v17 = a3[2];
    v12 = 0x8000;
    v8 = *((_QWORD *)a3 + 8);
    v16 = v7;
    v13 = 1073741908;
    v9 = a3[3];
    v19 = v8;
    v14 = a2;
    v18 = v9;
    v6 = LpcRequestPort(Object, &v11);
    ObfDereferenceObject(Object);
  }
  return v6;
}
