/*
 * XREFs of ??1CCD_MODE_RESULT_SET@@QEAA@XZ @ 0x1C0025D00
 * Callers:
 *     DxgkEnumerateModesForPathsModality @ 0x1C0302520 (DxgkEnumerateModesForPathsModality.c)
 * Callees:
 *     ?Clear@?$DoublyLinkedList@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@U?$DoublyLinkedListElementPlainDeleter@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@@@@@QEAAXXZ @ 0x1C004C82C (-Clear@-$DoublyLinkedList@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@U-$DoublyLinkedListEleme.c)
 */

void __fastcall CCD_MODE_RESULT_SET::~CCD_MODE_RESULT_SET(CCD_MODE_RESULT_SET *this)
{
  *(_QWORD *)this = &DoublyLinkedList<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT,DoublyLinkedListElementPlainDeleter<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT>>::`vftable';
  DoublyLinkedList<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT,DoublyLinkedListElementPlainDeleter<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT>>::Clear();
}
