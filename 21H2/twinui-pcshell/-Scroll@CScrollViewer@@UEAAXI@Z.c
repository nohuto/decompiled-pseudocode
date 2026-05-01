/*
 * XREFs of ?Scroll@CScrollViewer@@UEAAXI@Z @ 0x18042B240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScrollViewer::Scroll(CScrollViewer *this, int a2)
{
  int v2; // edi
  int v4; // edx
  int v5; // edx
  int v6; // edx

  v2 = *((_DWORD *)this + 12);
  v4 = a2 - 1;
  if ( !v4 )
    goto LABEL_6;
  v5 = v4 - 1;
  if ( !v5 )
  {
LABEL_5:
    v2 -= (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5));
    goto LABEL_7;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
LABEL_6:
    v2 += (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5));
    goto LABEL_7;
  }
  if ( v6 == 1 )
    goto LABEL_5;
LABEL_7:
  CScrollViewer::_ApplyScroll((CScrollViewer *)((char *)this - 208), v2, 0);
}
