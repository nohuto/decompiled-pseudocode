WDFMEMORY__ *__fastcall FxRequestSystemBuffer::GetHandle(FxRequestSystemBuffer *this)
{
  return (WDFMEMORY__ *)((unsigned __int64)&this[-3].8 ^ 0xFFFFFFFFFFFFFFF9uLL | 1);
}
