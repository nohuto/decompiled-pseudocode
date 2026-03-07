__int64 __fastcall XmInOp(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned int IoSpace; // eax

  v2 = *(unsigned int *)(a1 + 120);
  if ( (unsigned int)(v2 + *(_DWORD *)(a1 + 108)) > 0xFFFF )
    longjmp((_JBTYPE *)(a1 + 160), 9);
  v3 = *(unsigned __int16 *)(a1 + 108);
  *(_QWORD *)(a1 + 88) = a1 + 24;
  IoSpace = x86BiosReadIoSpace(v2, v3);
  return XmStoreResult(a1, IoSpace);
}
