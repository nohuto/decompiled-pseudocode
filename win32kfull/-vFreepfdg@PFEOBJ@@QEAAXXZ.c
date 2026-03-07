void __fastcall PFEOBJ::vFreepfdg(__int64 **this)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 *v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rdx
  _DWORD *v12; // rcx

  v2 = 0LL;
  v3 = 0LL;
  v4 = **this;
  v5 = *(_QWORD *)(SGDGetSessionState(this) + 32);
  GreAcquireSemaphore(*(_QWORD *)(v5 + 23640));
  v6 = *this;
  v7 = *((_DWORD *)*this + 34);
  if ( v7 )
  {
    *((_DWORD *)v6 + 34) = v7 - 1;
    if ( !*((_DWORD *)*this + 34) )
    {
      v8 = SGDGetSessionState(v6);
      v9 = *(_QWORD *)(v4 + 88);
      if ( v9 == *(_QWORD *)(*(_QWORD *)(v8 + 32) + 23448LL) && (v10 = *(_QWORD *)(v4 + 80), !*(_DWORD *)(v10 + 8)) )
      {
        UmfdTrueTypeFreeGlyphset(v10, *((unsigned int *)*this + 2), (*this)[2]);
        (*this)[2] = 0LL;
      }
      else if ( (*(_DWORD *)(v9 + 40) & 0x8000) != 0 && *(_QWORD *)(v9 + 3000) )
      {
        v11 = *this;
        if ( *(_BYTE *)((*this)[4] + 44) == 2 && (v12 = (_DWORD *)v11[2]) != 0LL && (v12[1] & 0x10) != 0 )
        {
          Win32FreePool(v12);
        }
        else
        {
          v2 = v11[2];
          v3 = v11[3];
        }
        (*this)[2] = 0LL;
        if ( v2 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v4 + 88) + 3000LL))(v2, v3);
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemGlyphSet");
  GreReleaseSemaphoreInternal(*(_QWORD *)(v5 + 23640));
}
