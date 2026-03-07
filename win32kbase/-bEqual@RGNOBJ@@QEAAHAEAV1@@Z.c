__int64 __fastcall RGNOBJ::bEqual(RGNOBJ *this, struct RGNOBJ *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx

  v2 = *(_QWORD *)a2;
  v3 = 0;
  if ( *(_DWORD *)(*(_QWORD *)this + 52LL) == *(_DWORD *)(v2 + 52) )
    return memcmp(
             *(const void **)(*(_QWORD *)this + 32LL),
             *(const void **)(v2 + 32),
             (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 40LL) - *(_DWORD *)(*(_QWORD *)this + 32LL))) == 0;
  return v3;
}
