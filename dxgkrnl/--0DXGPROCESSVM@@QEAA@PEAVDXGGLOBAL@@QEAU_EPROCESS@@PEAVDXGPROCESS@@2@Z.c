DXGPROCESSVM *__fastcall DXGPROCESSVM::DXGPROCESSVM(
        DXGPROCESSVM *this,
        struct DXGGLOBAL *a2,
        struct _EPROCESS *const a3,
        struct DXGPROCESS *a4,
        struct DXGPROCESS *a5)
{
  int v7; // edx

  DXGPROCESS::DXGPROCESS(this, a2, a3);
  v7 = *((_DWORD *)this + 106);
  *(_QWORD *)this = &DXGPROCESSVM::`vftable';
  v7 |= 0x100u;
  *((_DWORD *)this + 106) = v7;
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 76) = a4;
  *((_DWORD *)this + 106) = v7 & 0xFFFFFBFF | (*(_QWORD *)(*((_QWORD *)a4 + 76) + 272LL) != 0LL ? 0x400 : 0);
  *((_QWORD *)this + 77) = a5;
  DXGPROCESS::SetWin32kInterface(this, *((const struct _DXGKWIN32KENG_INTERFACE *const *)a4 + 11));
  return this;
}
