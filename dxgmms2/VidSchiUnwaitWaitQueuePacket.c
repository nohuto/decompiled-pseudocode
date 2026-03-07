int __fastcall VidSchiUnwaitWaitQueuePacket(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v5; // r15d
  __int64 v6; // rdx
  __int64 *v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // rax
  __int64 *v24; // rcx

  v5 = (unsigned __int8)a3;
  v6 = *(_QWORD *)(a2 + 88);
  v9 = (__int64 *)(a2 + 96);
  if ( v6 )
    v10 = *(_QWORD *)(v6 + 96);
  else
    v10 = *(_QWORD *)(*(_QWORD *)(*v9 + 40) + 16LL);
  v11 = *(_QWORD *)(v10 + 24);
  if ( bTracingEnabled )
  {
    if ( v6 )
    {
      v12 = *(_QWORD *)(v6 + 56);
      if ( !v12 || (*(_DWORD *)(v6 + 112) & 0x40) != 0 )
        v12 = v6;
    }
    else
    {
      v12 = *(_QWORD *)(*v9 + 48);
      if ( !v12 )
        v12 = *v9;
    }
    if ( (byte_1C00769C1 & 1) != 0 )
      McTemplateK0pp_EtwWriteTransfer(v12, &EventUnwaitQueuePacket, a3, a2, v12);
  }
  v13 = (_QWORD *)(a2 + 288);
  v14 = *(_QWORD *)(a2 + 288);
  if ( *(_QWORD *)(v14 + 8) != a2 + 288 )
    goto LABEL_37;
  v15 = *(_QWORD **)(a2 + 296);
  if ( (_QWORD *)*v15 != v13 )
    goto LABEL_37;
  *v15 = v14;
  *(_QWORD *)(v14 + 8) = v15;
  *v13 = 0LL;
  v16 = *(_QWORD *)(a2 + 280);
  *(_QWORD *)(a2 + 296) = 0LL;
  v17 = *(_DWORD *)(v16 + 48);
  if ( ((v17 - 2) & 0xFFFFFFFC) == 0 && v17 != 3 )
  {
    v18 = *(_QWORD *)(a2 + 88);
    if ( v18 )
      _InterlockedDecrement((volatile signed __int32 *)(v18 + 800));
    if ( (*(_DWORD *)(a2 + 272) & 8) != 0 )
    {
      --*(_DWORD *)(v11 + 820);
      *(_DWORD *)(a2 + 272) &= ~8u;
    }
  }
  VidSchiReleaseSyncObjectReference(
    *(char **)(a2 + 280),
    (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v14);
  *(_DWORD *)(a2 + 272) = *(_DWORD *)(a2 + 272) ^ (*(_DWORD *)(a2 + 272) ^ (2 * v5)) & 2 | 1;
  if ( (*(_DWORD *)(a2 + 64) & 0x10) != 0 )
  {
    v20 = (_QWORD *)(a2 + 32);
    v21 = *(_QWORD *)(a2 + 32);
    if ( *(_QWORD *)(v21 + 8) == a2 + 32 )
    {
      v22 = *(_QWORD **)(a2 + 40);
      if ( (_QWORD *)*v22 == v20 )
      {
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        *v20 = 0LL;
        v23 = *(_QWORD *)(a2 + 88);
        *(_QWORD *)(a2 + 40) = 0LL;
        --*(_DWORD *)(v23 + 804);
        *(_DWORD *)(a2 + 64) &= ~0x10u;
        LODWORD(v19) = VidSchiFreeQueuePacket(*(_QWORD *)(a2 + 88));
        return v19;
      }
    }
LABEL_37:
    __fastfail(3u);
  }
  v19 = *(_QWORD *)(a2 + 88);
  if ( v19 )
  {
    LODWORD(v19) = *(_DWORD *)(v19 + 184);
    if ( (v19 & 0x20) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 184LL) &= ~0x20u;
      LODWORD(v19) = VidSchiUnwaitContext(*(_QWORD *)(a2 + 88), 26172LL);
      if ( (_BYTE)v19 )
      {
        *(_QWORD *)(v11 + 1224) = MEMORY[0xFFFFF78000000320];
        LODWORD(v19) = KeSetEvent((PRKEVENT)(v11 + 1192), 0, 0);
      }
    }
    return v19;
  }
  if ( a4 && !*(_QWORD *)(*v9 + 48) )
    *a4 = *v9;
  v19 = *v9 + 176;
  if ( !*(_QWORD *)v19 )
  {
    v24 = *(__int64 **)(a1 + 8);
    if ( *v24 == a1 )
    {
      *(_QWORD *)v19 = a1;
      *(_QWORD *)(v19 + 8) = v24;
      *v24 = v19;
      *(_QWORD *)(a1 + 8) = v19;
      *(_BYTE *)(a1 + 16) = 0;
      return v19;
    }
    goto LABEL_37;
  }
  return v19;
}
