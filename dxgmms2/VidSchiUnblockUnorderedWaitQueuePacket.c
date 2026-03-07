int __fastcall VidSchiUnblockUnorderedWaitQueuePacket(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // r9
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // r10
  __int64 v9; // rbx
  _QWORD *v10; // r11
  _QWORD *v11; // r11
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8

  v3 = *(_QWORD *)(a2 + 88);
  if ( v3 )
    v5 = *(_QWORD *)(v3 + 104);
  else
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 40LL) + 8LL);
  v6 = *(_QWORD *)(v5 + 32);
  v7 = (_QWORD *)(a2 + 288);
  v8 = *(_QWORD *)(a2 + 288);
  v9 = *(_QWORD *)(a2 + 280);
  if ( *(_QWORD *)(v8 + 8) != a2 + 288
    || (v10 = *(_QWORD **)(a2 + 296), (_QWORD *)*v10 != v7)
    || (*v10 = v8, *(_QWORD *)(v8 + 8) = v10, v11 = *(_QWORD **)(v9 + 104), *v11 != v9 + 96) )
  {
    __fastfail(3u);
  }
  *v7 = v9 + 96;
  *(_QWORD *)(a2 + 296) = v11;
  *v11 = v7;
  *(_QWORD *)(v9 + 104) = v7;
  *(_DWORD *)(a2 + 272) &= ~4u;
  --*(_DWORD *)(v9 + 40);
  v12 = *(_QWORD *)(a2 + 88);
  if ( v12 )
  {
    --*(_DWORD *)(v12 + 796);
  }
  else
  {
    v12 = *(_QWORD *)(a2 + 96);
    if ( v12 )
      --*(_DWORD *)(v12 + 156);
  }
  --*(_DWORD *)(v5 + 1588);
  --*(_DWORD *)(v6 + 816);
  if ( (_BYTE)a3 )
  {
    LODWORD(v12) = VidSchiUnwaitWaitQueuePacket(a1, a2, a3, 0LL);
    if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
      LODWORD(v12) = McTemplateK0q_EtwWriteTransfer(v13, &EventPerformanceWarning, v14, 15);
    _InterlockedIncrement(&gulSyncObjTimeouted);
  }
  return v12;
}
