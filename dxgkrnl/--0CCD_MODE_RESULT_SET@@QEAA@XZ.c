/*
 * XREFs of ??0CCD_MODE_RESULT_SET@@QEAA@XZ @ 0x1C03B6268
 * Callers:
 *     DxgkEnumerateModesForPathsModality @ 0x1C02FD6F0 (DxgkEnumerateModesForPathsModality.c)
 * Callees:
 *     <none>
 */

CCD_MODE_RESULT_SET *__fastcall CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SET(CCD_MODE_RESULT_SET *this)
{
  CCD_MODE_RESULT_SET *result; // rax

  *((_DWORD *)this + 10) = 2;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &DoublyLinkedList<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT,DoublyLinkedListElementPlainDeleter<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT>>::`vftable';
  *((_QWORD *)this + 3) = (char *)this + 16;
  *((_QWORD *)this + 2) = (char *)this + 16;
  result = this;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 12) = 0;
  return result;
}
