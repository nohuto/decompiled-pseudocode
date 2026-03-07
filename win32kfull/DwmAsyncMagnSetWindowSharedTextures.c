__int64 __fastcall DwmAsyncMagnSetWindowSharedTextures(PVOID Object, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  char *v10; // r8
  __int64 *v11; // r9
  __int64 v12; // r10
  __int64 v13; // rax
  int v15; // [rsp+20h] [rbp-E0h] BYREF
  __int16 v16; // [rsp+24h] [rbp-DCh]
  int v17; // [rsp+48h] [rbp-B8h]
  __int64 v18; // [rsp+50h] [rbp-B0h]
  unsigned int v19; // [rsp+58h] [rbp-A8h]
  int v20; // [rsp+5Ch] [rbp-A4h]
  int v21; // [rsp+60h] [rbp-A0h]
  int v22; // [rsp+64h] [rbp-9Ch]
  char v23; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+128h] [rbp+28h]

  v8 = -1073741823;
  if ( Object )
  {
    memset_0(&v15, 0, 0x110uLL);
    v9 = *(_DWORD *)a4;
    v16 = 0x8000;
    v20 = *(_DWORD *)(a4 + 4);
    v21 = *(_DWORD *)(a4 + 8);
    v22 = *(_DWORD *)(a4 + 12);
    v15 = 17826024;
    v17 = 1073741927;
    v18 = a2;
    v24 = a3;
    v19 = v9;
    if ( v9 >= 6 )
    {
      v9 = 6;
    }
    else if ( !v9 )
    {
LABEL_8:
      EtwUpdateEvent(0LL, 1073741927LL);
      v8 = LpcRequestPort(Object, &v15);
      ObfDereferenceObject(Object);
      return v8;
    }
    v10 = &v23;
    v11 = (__int64 *)(*(_QWORD *)(a4 + 16) + 8LL);
    v12 = v9;
    do
    {
      *((_QWORD *)v10 - 1) = v11[1];
      *(_QWORD *)v10 = *(v11 - 1);
      v10 += 32;
      v13 = *v11;
      v11 += 3;
      *((_QWORD *)v10 - 3) = v13;
      --v12;
    }
    while ( v12 );
    goto LABEL_8;
  }
  return v8;
}
