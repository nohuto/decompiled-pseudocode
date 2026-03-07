void __fastcall CcPerfLogWorkItemEnqueue(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v5; // rdx
  char v7; // bl
  int v8; // eax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int8 CurrentIrql; // al
  __int64 v12; // r8
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+40h] [rbp-20h]
  __int128 *v17; // [rsp+48h] [rbp-18h] BYREF
  int v18; // [rsp+50h] [rbp-10h]
  int v19; // [rsp+54h] [rbp-Ch]

  v5 = *(_QWORD *)(a2 + 152);
  v16 = 0LL;
  v15 = 0LL;
  if ( a1 == v5 + 72 )
  {
    v7 = 1;
    goto LABEL_6;
  }
  if ( a1 == v5 + 120 )
  {
    v7 = 7;
  }
  else if ( a1 == v5 + 88 )
  {
    v7 = 2;
  }
  else
  {
    if ( a1 == v5 + 104 )
      goto LABEL_5;
    if ( a1 == *(_QWORD *)(a2 + 136) + 848LL )
    {
      v7 = 4;
      goto LABEL_6;
    }
    if ( a1 == v5 + 312 || a1 == v5 + 424 )
    {
LABEL_5:
      v7 = 3;
    }
    else
    {
      v12 = *(_QWORD *)(v5 + 256);
      if ( a1 == v12 || a1 == v12 + 16 || a1 == v12 + 32 )
        v7 = 5;
      else
        v7 = a1 == 0 ? 6 : 0;
    }
  }
LABEL_6:
  v8 = *(_DWORD *)(a2 + 128);
  switch ( v8 )
  {
    case 2:
    case 7:
      BYTE1(v16) = 2;
      if ( a4 )
      {
        if ( v8 == 2 )
          v10 = *(_QWORD *)(a2 + 16);
        else
          v10 = *(_QWORD *)(a2 + 24);
        v9 = *(_QWORD *)(v10 + 96) & 0xFFFFFFFFFFFFFFF0uLL;
        goto LABEL_14;
      }
      if ( v8 == 2 )
        v13 = *(_QWORD *)(a2 + 16);
      else
        v13 = *(_QWORD *)(a2 + 24);
      v14 = CcReferenceSharedCacheMapFileObject(v13);
      *((_QWORD *)&v15 + 1) = *(_QWORD *)(v14 + 24);
      ObFastDereferenceObjectDeferDelete((signed __int64 *)(v13 + 96), v14, 0x63536343u);
      break;
    case 1:
      BYTE1(v16) = 1;
      v9 = *(_QWORD *)(a2 + 16);
LABEL_14:
      *((_QWORD *)&v15 + 1) = *(_QWORD *)(v9 + 24);
      break;
    case 3:
      BYTE1(v16) = 3;
      break;
    case 4:
      BYTE1(v16) = 4;
      break;
  }
  LOBYTE(v16) = v7;
  *(_QWORD *)&v15 = a2;
  BYTE2(v16) = a3;
  CurrentIrql = KeGetCurrentIrql();
  v19 = 0;
  v18 = 24;
  v17 = &v15;
  if ( CurrentIrql >= 2u )
    EtwTraceKernelEvent((__int64)&v17, 1u, 0x80020000, 0x1600u, 0x400102u);
  else
    EtwTraceKernelEvent((__int64)&v17, 1u, 0x80020000, 0x1600u, 0x401902u);
}
