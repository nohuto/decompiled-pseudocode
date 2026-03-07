void __fastcall DC::vSetRendering(DC *this)
{
  __int64 v2; // rdx
  int v3; // eax
  bool v4; // zf
  __int64 v5; // rcx

  v2 = *((_DWORD *)this + 10) & 1;
  *((_DWORD *)this + 256) = *((_DWORD *)this + 2 * v2 + 254);
  *((_DWORD *)this + 257) = *((_DWORD *)this + 2 * v2 + 255);
  *((_DWORD *)this + 262) = *((_DWORD *)this + 258);
  *((_DWORD *)this + 263) = *((_DWORD *)this + 259);
  *((_DWORD *)this + 264) = *((_DWORD *)this + 260);
  v3 = *((_DWORD *)this + 261);
  *((_DWORD *)this + 10) |= 1u;
  v4 = (*((_DWORD *)this + 9) & 0x4000) == 0;
  *((_DWORD *)this + 265) = v3;
  if ( !v4 )
  {
    v5 = *((_QWORD *)this + 62);
    if ( *(_QWORD *)(v5 + 248) || (*(_DWORD *)(v5 + 116) & 1) != 0 )
    {
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(v5 + 312) + 64LL), UserRequest, 0, 0, 0LL);
      ++*(_DWORD *)(*((_QWORD *)this + 62) + 324LL);
      KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(*((_QWORD *)this + 62) + 312LL) + 64LL), 0);
    }
  }
}
