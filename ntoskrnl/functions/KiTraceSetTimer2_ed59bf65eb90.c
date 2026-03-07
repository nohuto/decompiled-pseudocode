void __fastcall KiTraceSetTimer2(__int64 a1, char a2, int a3)
{
  __int64 v3; // rax
  __int64 v6; // rsi
  __int64 v7; // r15
  char v8; // r12
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  char v13; // cl
  char v14; // dl
  char v15; // cl
  _QWORD *v16; // [rsp+30h] [rbp-50h] BYREF
  int v17; // [rsp+38h] [rbp-48h]
  int v18; // [rsp+3Ch] [rbp-44h]
  _QWORD v19[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+58h] [rbp-28h]
  unsigned __int64 v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+68h] [rbp-18h]
  __int64 v24; // [rsp+70h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 72);
  v24 = 0LL;
  v6 = *(_QWORD *)(a1 + 96);
  v7 = *(_QWORD *)(a1 + 104);
  v8 = *(_BYTE *)(a1 + 129);
  v19[0] = v3;
  v19[1] = *(_QWORD *)(a1 + 80);
  v20 = *(_QWORD *)(a1 + 88);
  KiUpdateTimer2Flags((volatile signed __int32 *)a1, a3, 0);
  if ( a3 == 1 )
    KxReleaseSpinLock((volatile signed __int64 *)&KiTimer2CollectionLock);
  v10 = __ROL8__(v6 ^ KiWaitNever, KiWaitNever);
  v11 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v7 ^ KiWaitNever, KiWaitNever));
  v12 = KiWaitAlways ^ _byteswap_uint64(a1 ^ v10);
  if ( a2 )
    KiTraceCancelTimer2(a1, v12);
  v22 = v12;
  v21 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v12 ^ _byteswap_uint64(KiWaitAlways ^ a1), KiWaitNever));
  v23 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ v11), KiWaitNever));
  v13 = (2 * (v8 & 2)) | 8;
  if ( (v8 & 4) == 0 )
    v13 = 2 * (v8 & 2);
  v14 = v13;
  v15 = v13 | 0x10;
  if ( (v8 & 8) == 0 )
    v15 = v14;
  LOBYTE(v24) = v15;
  if ( v12 )
  {
    v15 |= 1u;
    LOBYTE(v24) = v15;
  }
  if ( v20 )
    LOBYTE(v24) = v15 | 2;
  v18 = 0;
  v16 = v19;
  v17 = 56;
  EtwTraceKernelEvent((__int64)&v16, 1u, 0x40020000u, 0xF68u, 0x601B02u);
}
