void __fastcall tagWND::ClearClipRgnOrMaxClip(tagWND *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 5);
  v3 = *(_QWORD *)(v1 + 168);
  if ( v3 && (*(_WORD *)(v1 + 42) & 0x2FFF) != 0x29D )
    GreDeleteObject(v3);
  *(_QWORD *)(*((_QWORD *)this + 5) + 168LL) = 0LL;
}
