/*
 * XREFs of ??0_unnamed_type_BlockerArray_@DripsBlockerTrackingHelper@@QEAA@XZ @ 0x1C001F7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0_unnamed_type_Activations_@_unnamed_type_BlockerArray_@DripsBlockerTrackingHelper@@QEAA@XZ @ 0x1C001955C (--0_unnamed_type_Activations_@_unnamed_type_BlockerArray_@DripsBlockerTrackingHelper@@QEAA@XZ.c)
 */

DripsBlockerTrackingHelper::_unnamed_type_BlockerArray_ *__fastcall DripsBlockerTrackingHelper::_unnamed_type_BlockerArray_::_unnamed_type_BlockerArray_(
        DripsBlockerTrackingHelper::_unnamed_type_BlockerArray_ *this)
{
  DripsBlockerTrackingHelper::_unnamed_type_BlockerArray_::_unnamed_type_Activations_ *v1; // rdi
  __int64 v3; // rsi

  v1 = (DripsBlockerTrackingHelper::_unnamed_type_BlockerArray_ *)((char *)this + 112);
  *(_QWORD *)this = 0LL;
  *(_OWORD *)((char *)this + 8) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *((_BYTE *)this + 40) = 0;
  v3 = 64LL;
  *((_DWORD *)this + 11) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_BYTE *)this + 104) = 0;
  *((_DWORD *)this + 27) = 0;
  do
  {
    DripsBlockerTrackingHelper::_unnamed_type_BlockerArray_::_unnamed_type_Activations_::_unnamed_type_Activations_(v1);
    v1 = (DripsBlockerTrackingHelper::_unnamed_type_BlockerArray_::_unnamed_type_Activations_ *)((char *)v1 + 72);
    --v3;
  }
  while ( v3 );
  return this;
}
