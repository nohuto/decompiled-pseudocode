__int64 __fastcall CDwmAppHost::AddRef(CDwmAppHost *this)
{
  __int64 result; // rax

  result = (unsigned int)(*((_DWORD *)this + 2) + 1);
  *((_DWORD *)this + 2) = result;
  return result;
}
