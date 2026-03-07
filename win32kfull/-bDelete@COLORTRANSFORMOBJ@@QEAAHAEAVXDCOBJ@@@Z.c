__int64 __fastcall COLORTRANSFORMOBJ::bDelete(COLORTRANSFORMOBJ *this, struct XDCOBJ *a2)
{
  _QWORD *v2; // rax
  unsigned int v3; // edi
  void *v6; // r12
  Gre::Base *v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rbx
  unsigned int (__fastcall *v10)(_QWORD, __int64); // rax
  char v12; // [rsp+20h] [rbp-60h]
  __int128 v13; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+40h] [rbp-40h]
  int v15; // [rsp+48h] [rbp-38h]
  _QWORD v16[2]; // [rsp+50h] [rbp-30h] BYREF
  __int16 v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+68h] [rbp-18h]
  __int64 v19; // [rsp+70h] [rbp-10h]
  __int64 v20; // [rsp+B0h] [rbp+30h] BYREF

  v2 = *(_QWORD **)this;
  v3 = 0;
  if ( *(_QWORD *)this )
  {
    v6 = (void *)*v2;
    v12 = 14;
    if ( (unsigned int)HmgRemoveObject(*v2, 0LL, 1LL, 1LL, v12, 0LL) )
    {
      v8 = *(_QWORD *)(*(_QWORD *)this + 24LL);
      if ( v8 )
      {
        v9 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
        v20 = v9;
        if ( v9 )
        {
          if ( (*(_DWORD *)(v9 + 40) & 0x8000) != 0 && (unsigned int)PDEVOBJ::bAllowDDICall((PDEVOBJ *)&v20) )
          {
            *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
          }
          else
          {
            v16[1] = 0LL;
            v13 = 0LL;
            v17 = 256;
            v19 = 0LL;
            v18 = 0LL;
            v16[0] = 0LL;
            v15 = 1;
            if ( (*(_DWORD *)(v9 + 40) & 1) != 0 )
            {
              Gre::Base::Globals(v7);
              *(_QWORD *)&v13 = *(_QWORD *)(v9 + 48);
              v14 = v9;
              GreAcquireSemaphore(v13);
              EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v13, 11LL);
            }
            v10 = *(unsigned int (__fastcall **)(_QWORD, __int64))(v9 + 3184);
            if ( v10 )
            {
              if ( v10(*(_QWORD *)(v9 + 1768), v8) || (*(_DWORD *)(v9 + 40) & 0x8000) != 0 )
                *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
            }
            else
            {
              EngSetLastError(0x57u);
            }
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v13);
            if ( v16[0] )
              DLODCOBJ::vUnlock((DLODCOBJ *)v16);
          }
        }
      }
      if ( !*(_QWORD *)(*(_QWORD *)this + 24LL) )
      {
        XDCOBJ::bRemoveColorTransform(a2, v6);
        FreeObject(*(_QWORD *)this, 14LL);
        *(_QWORD *)this = 0LL;
      }
    }
    return 1;
  }
  return v3;
}
