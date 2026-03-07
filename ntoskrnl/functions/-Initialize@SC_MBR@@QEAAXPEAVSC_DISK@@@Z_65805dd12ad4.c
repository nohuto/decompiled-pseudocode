void __fastcall SC_MBR::Initialize(SC_MBR *this, struct SC_DISK *a2)
{
  __int64 v2; // rax

  *(_QWORD *)this = a2;
  v2 = *((_QWORD *)a2 + 27);
  if ( !v2 || v2 > 1024 )
    *((_QWORD *)a2 + 27) = 1024LL;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 228LL) - 1) > 0xFE )
    *(_DWORD *)(*(_QWORD *)this + 228LL) = 255;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 232LL) - 1) > 0x3E )
    *(_DWORD *)(*(_QWORD *)this + 232LL) = 63;
}
