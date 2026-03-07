_QWORD *__fastcall ACPICMButtonNotifyByDeviceObject(ULONG_PTR a1, unsigned int a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  if ( result )
    return ACPICMButtonNotify(a1, (__int64)result, a2);
  return result;
}
