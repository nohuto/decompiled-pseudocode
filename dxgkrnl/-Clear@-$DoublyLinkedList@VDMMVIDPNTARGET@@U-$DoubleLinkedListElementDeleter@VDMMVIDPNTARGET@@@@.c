char __fastcall DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::Clear(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  v2 = (_QWORD *)(a1 + 16);
  while ( 1 )
  {
    v3 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
      break;
    if ( (_QWORD *)v3[1] != v2 || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    --*(_QWORD *)(a1 + 32);
    *v3 = 0LL;
    v3[1] = 0LL;
    if ( v3 != (_QWORD *)-72LL )
      (*(void (__fastcall **)(_QWORD *, __int64))v3[9])(v3 + 9, 1LL);
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    LOBYTE(v3) = WdLogSingleEntry1(1LL, 394LL);
    if ( bTracingEnabled )
    {
      LOBYTE(v3) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        LOBYTE(v3) = McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                       v6,
                       v5,
                       v7,
                       0,
                       2,
                       -1,
                       (__int64)L"this->GetNumElements() == 0",
                       394LL,
                       0LL,
                       0LL,
                       0LL,
                       0LL);
    }
  }
  return (char)v3;
}
