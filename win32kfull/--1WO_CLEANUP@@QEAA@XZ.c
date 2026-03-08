/*
 * XREFs of ??1WO_CLEANUP@@QEAA@XZ @ 0x1C0289B14
 * Callers:
 *     EngCreateWnd @ 0x1C028A3A0 (EngCreateWnd.c)
 * Callees:
 *     <none>
 */

void __fastcall WO_CLEANUP::~WO_CLEANUP(WO_CLEANUP *this)
{
  _DWORD *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  REGION *v5; // rcx
  REGION *v6; // rcx
  REGION *v7; // rcx
  __int64 v8; // rcx

  if ( !*(_DWORD *)this )
  {
    v2 = (_DWORD *)*((_QWORD *)this + 1);
    if ( v2 )
    {
      *v2 = 0;
      Win32FreePool(*((void **)this + 1));
    }
    v3 = *((_QWORD *)this + 2);
    if ( v3 )
    {
      *(_DWORD *)(v3 + 152) = 0;
      Win32FreePool(*((void **)this + 2));
    }
    v4 = *((_QWORD *)this + 3);
    if ( v4 )
    {
      *(_DWORD *)(v4 + 152) = 0;
      Win32FreePool(*((void **)this + 3));
    }
    v5 = (REGION *)*((_QWORD *)this + 4);
    if ( v5 )
      REGION::vDeleteREGION(v5);
    v6 = (REGION *)*((_QWORD *)this + 5);
    if ( v6 )
      REGION::vDeleteREGION(v6);
    v7 = (REGION *)*((_QWORD *)this + 6);
    if ( v7 )
      REGION::vDeleteREGION(v7);
    v8 = *((_QWORD *)this + 7);
    if ( v8 )
      GreDeleteSemaphore(v8);
  }
}
