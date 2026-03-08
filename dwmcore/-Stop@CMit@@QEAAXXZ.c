/*
 * XREFs of ?Stop@CMit@@QEAAXXZ @ 0x1801AD8EC
 * Callers:
 *     ??1CInputManager@@MEAA@XZ @ 0x18019F5E8 (--1CInputManager@@MEAA@XZ.c)
 *     ??1CMit@@UEAA@XZ @ 0x1801AD864 (--1CMit@@UEAA@XZ.c)
 *     ??1CGlobalMit@@UEAA@XZ @ 0x1801AE294 (--1CGlobalMit@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CMit::Stop(CMit *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 2) == 0LL;
  *((_BYTE *)this + 32) = 1;
  if ( !v1 )
  {
    SetEvent(*((HANDLE *)this + 3));
    WaitForSingleObject(*((HANDLE *)this + 2), 0xFFFFFFFF);
    CloseHandle(*((HANDLE *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
}
