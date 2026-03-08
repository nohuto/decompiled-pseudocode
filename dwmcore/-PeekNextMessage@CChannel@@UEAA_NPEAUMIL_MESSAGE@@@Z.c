/*
 * XREFs of ?PeekNextMessage@CChannel@@UEAA_NPEAUMIL_MESSAGE@@@Z @ 0x1800F55E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 */

char __fastcall CChannel::PeekNextMessage(CChannel *this, struct MIL_MESSAGE *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  char v5; // si
  void **v6; // rbx
  void ***v7; // rcx
  void **v8; // rax

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 104);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v6 = (void **)((char *)this + 80);
  v7 = (void ***)*v6;
  if ( *v6 == v6 )
  {
    *(_OWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 2) = 0LL;
    *((_DWORD *)a2 + 6) = 0;
  }
  else
  {
    if ( v7[1] != v6 || (v8 = *v7, (*v7)[1] != v7) )
      __fastfail(3u);
    *v6 = v8;
    v8[1] = v6;
    *(_OWORD *)a2 = *((_OWORD *)v7 + 1);
    *((_QWORD *)a2 + 2) = v7[4];
    *((_DWORD *)a2 + 6) = *((_DWORD *)v7 + 10);
    operator delete(v7);
    v5 = 1;
  }
  LeaveCriticalSection(v2);
  return v5;
}
