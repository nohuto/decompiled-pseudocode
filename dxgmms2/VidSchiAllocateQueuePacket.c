__int64 __fastcall VidSchiAllocateQueuePacket(__int64 a1, int a2)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  _QWORD *v6; // rax
  size_t v7; // r14
  _QWORD *v8; // rbx
  __int64 result; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD v12[20]; // [rsp+20h] [rbp-C8h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v5 = *(_DWORD *)(v4 + 152) * ((*(_DWORD *)(v4 + 76) << 6) + ((8 * *(_DWORD *)(v4 + 76) + 231) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v4 + 76) + 111);
  if ( v5 <= 0x460 )
    v5 = 1120;
  v6 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v4 + 1736), (_QWORD **)(a1 + 712), (_DWORD *)(a1 + 728));
  v7 = v5;
  if ( v6 )
  {
    v8 = v6 - 1;
    if ( v6 == (_QWORD *)8 )
      return (__int64)v8;
    goto LABEL_5;
  }
  result = ExAllocatePool2(64LL, v5, 895576406LL);
  v8 = (_QWORD *)result;
  if ( result )
    goto LABEL_6;
  if ( a2 )
  {
    memset(v12, 0, sizeof(v12));
    v10 = *(_QWORD *)(a1 + 96);
    LODWORD(v12[4]) |= 0x40u;
    LODWORD(v12[2]) = 1;
    LODWORD(v12[6]) = *(unsigned __int16 *)(v10 + 4);
    VidSchRegisterCompletionEvent(v4, v12);
    do
    {
      v11 = VidSchiInterlockedRemoveHeadListIfExist(
              (KSPIN_LOCK *)(v4 + 1736),
              (_QWORD **)(a1 + 712),
              (_DWORD *)(a1 + 728));
      if ( v11 )
        v8 = v11 - 1;
      else
        VidSchWaitForCompletionEvent(v4, v12, 19LL);
    }
    while ( !v8 );
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v4 + 1744), v12, 0LL);
LABEL_5:
    memset(v8, 0, v7);
LABEL_6:
    v8[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v8 + 13) = 1;
    VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v4 + 1736), a1 + 760, v8 + 1, (_DWORD *)(a1 + 776));
    return (__int64)v8;
  }
  return result;
}
