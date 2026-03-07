__int64 __fastcall DEVLOCKBLTOBJ::bDisposeSrcDco(DEVLOCKBLTOBJ *this, __int64 a2, __int64 a3)
{
  DC **v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbx
  DC *v8; // rcx
  __int64 v9; // rbx
  __int64 v11; // rbx
  __int64 CurrentProcess; // rax
  int v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = (DC **)((char *)this + 144);
  v5 = *((_QWORD *)this + 18);
  if ( v5 && *((_BYTE *)v3 + 17) )
  {
    v6 = *(_QWORD *)(v5 + 48);
    if ( (*((_DWORD *)this + 28) & 0x20) != 0 )
    {
      *(_DWORD *)(v5 + 36) &= ~0x4000u;
      DC::pSurface(*v3, *(struct SURFACE **)(v6 + 2528));
    }
    v7 = *((_QWORD *)this + 21);
    if ( v7 )
    {
      v11 = *(_QWORD *)(v7 + 72);
      CurrentProcess = PsGetCurrentProcess(v5, v6, a3);
      MmUnmapViewOfSection(CurrentProcess, v11);
    }
    DEVLOCKBLTOBJ::vClearRenderState(this, v3);
    if ( *v3 && *((_BYTE *)v3 + 16) )
    {
      *((_DWORD *)*v3 + 10) &= ~2u;
      *((_BYTE *)v3 + 16) = 0;
    }
    if ( *v3 )
    {
      if ( *((_DWORD *)v3 + 2) && (*((_DWORD *)*v3 + 11) & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v3);
        *((_DWORD *)*v3 + 11) &= ~2u;
        *((_DWORD *)v3 + 2) = 0;
      }
      v8 = *v3;
      v13 = 0;
      v9 = *(_QWORD *)v8;
      HmgDecrementExclusiveReferenceCountEx(v8, *((unsigned int *)v3 + 3), &v13);
      if ( v13 )
        GrepDeleteDC(v9, 0x2000000LL);
    }
    *v3 = 0LL;
  }
  return 1LL;
}
