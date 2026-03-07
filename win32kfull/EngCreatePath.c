PATHOBJ *EngCreatePath(void)
{
  EPATHOBJ *v0; // rax
  PATHOBJ *v1; // rbx
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v3);
  if ( v4 && (v0 = (EPATHOBJ *)Win32AllocPoolZInit(80LL, 1952542791LL), (v1 = (PATHOBJ *)v0) != 0LL) )
  {
    *(_QWORD *)(v4 + 312) = v0;
    EPATHOBJ::vLock(v0, *(struct HPATH__ **)v4);
  }
  else
  {
    v1 = 0LL;
  }
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v3);
  return v1;
}
