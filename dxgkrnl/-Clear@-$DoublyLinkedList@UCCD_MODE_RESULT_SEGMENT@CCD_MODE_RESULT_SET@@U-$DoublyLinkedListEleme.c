/*
 * XREFs of ?Clear@?$DoublyLinkedList@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@U?$DoublyLinkedListElementPlainDeleter@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@@@@@QEAAXXZ @ 0x1C004B7CC
 * Callers:
 *     ??1CCD_MODE_RESULT_SET@@QEAA@XZ @ 0x1C0026080 (--1CCD_MODE_RESULT_SET@@QEAA@XZ.c)
 *     ??_E?$DoublyLinkedList@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@U?$DoublyLinkedListElementPlainDeleter@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@@@@@UEAAPEAXI@Z @ 0x1C004B780 (--_E-$DoublyLinkedList@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@U-$DoublyLinkedListElementP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

char __fastcall DoublyLinkedList<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT,DoublyLinkedListElementPlainDeleter<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT>>::Clear(
        __int64 a1)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  v2 = (_QWORD **)(a1 + 16);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    --*(_QWORD *)(a1 + 32);
    v3[1] = 0LL;
    *v3 = 0LL;
    if ( v3 != (_QWORD *)8 )
      (*(void (__fastcall **)(_QWORD *, __int64))*(v3 - 1))(v3 - 1, 1LL);
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
                       0LL,
                       2,
                       -1,
                       L"this->GetNumElements() == 0",
                       394LL,
                       0LL,
                       0LL,
                       0LL,
                       0LL);
    }
  }
  return (char)v3;
}
