/*
 * XREFs of ??_GCStandardEvent@@UEAAPEAXI@Z @ 0x1400151C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14001B7E0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CStandardEvent *__fastcall CStandardEvent::`scalar deleting destructor'(CStandardEvent *this, void *a2)
{
  char v2; // di
  wil::details *v4; // rcx

  v2 = (char)a2;
  v4 = (wil::details *)*((_QWORD *)this + 2);
  if ( v4 )
    wil::details::CloseHandle(v4, a2);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
