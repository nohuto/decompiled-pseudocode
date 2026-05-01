/*
 * XREFs of ?HandleDestruction@CCharmsWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x18006A0D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CCharmsWindowManager::HandleDestruction(CCharmsWindowManager *this, HWND a2, __int64 a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 i; // rbx
  int v7; // ebx
  __int64 *v9; // rcx
  __int64 v10; // rax

  v5 = 0LL;
  for ( i = 0LL; i < *((_QWORD *)this + 4); ++i )
  {
    v9 = *(__int64 **)(*((_QWORD *)this + 3) + 8 * i);
    v10 = *v9;
    if ( a2 )
    {
      if ( (HWND)(*(__int64 (__fastcall **)(__int64 *, HWND, __int64))(v10 + 32))(v9, a2, a3) == a2 )
        goto LABEL_7;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v10 + 48))(v9, 0LL) )
    {
LABEL_7:
      v5 = i;
      v7 = 0;
      goto LABEL_3;
    }
  }
  v7 = -2147319765;
LABEL_3:
  if ( v7 >= 0 )
  {
    (*(void (__fastcall **)(char *, unsigned __int64))(*((_QWORD *)this + 2) + 16LL))((char *)this + 16, v5);
    if ( !v5 )
      *((_DWORD *)this + 14) = 0;
  }
  return v7 >= 0;
}
