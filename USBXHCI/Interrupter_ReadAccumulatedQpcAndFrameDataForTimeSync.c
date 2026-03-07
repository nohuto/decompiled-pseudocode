char __fastcall Interrupter_ReadAccumulatedQpcAndFrameDataForTimeSync(__int64 a1, _QWORD **a2)
{
  *a2[1] = (*a2)[16];
  *a2[2] = (*a2)[17];
  return 1;
}
