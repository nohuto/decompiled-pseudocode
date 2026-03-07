__int64 __fastcall CFlipExBuffer::UpdateDxgkrnlIndependentFlipDuration(
        HANDLE *this,
        int a2,
        int a3,
        const unsigned int *a4,
        int *a5)
{
  __int64 result; // rax

  result = DxgkSetIndependentFlipMode(this[68], a2, a3, (__int64)a4, (__int64)a5, (__int64)(this + 67));
  if ( (int)result >= 0 )
    *((_DWORD *)this + 155) = a2;
  return result;
}
