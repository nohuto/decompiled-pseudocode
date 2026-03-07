LONG_PTR CcNotifyWriteBehind()
{
  return CcForEachPartition(
           (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))CcNotifyWriteBehindHelper,
           2LL,
           0,
           0);
}
