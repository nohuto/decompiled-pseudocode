DEVICE_PFTOBJ *__fastcall DEVICE_PFTOBJ::DEVICE_PFTOBJ(DEVICE_PFTOBJ *this)
{
  *(_QWORD *)this = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 32) + 20280LL);
  return this;
}
