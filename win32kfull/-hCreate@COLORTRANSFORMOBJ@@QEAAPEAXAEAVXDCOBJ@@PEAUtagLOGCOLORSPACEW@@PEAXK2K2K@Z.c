struct HOBJ__ *__fastcall COLORTRANSFORMOBJ::hCreate(
        COLORTRANSFORMOBJ *this,
        struct XDCOBJ *a2,
        struct tagLOGCOLORSPACEW *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        void *a8,
        unsigned int a9)
{
  struct HOBJ__ *v9; // rdi
  __int64 v10; // rsi
  __int64 v14; // rbx
  struct OBJECT *Object; // rax
  struct OBJECT *v16; // r15
  Gre::Base *v17; // rcx
  int v18; // eax
  __int64 (__fastcall *v19)(_QWORD, struct tagLOGCOLORSPACEW *, void *, _QWORD, void *, unsigned int, void *, unsigned int, _DWORD); // r10
  __int128 v21; // [rsp+50h] [rbp-49h] BYREF
  __int64 v22; // [rsp+60h] [rbp-39h]
  int v23; // [rsp+68h] [rbp-31h]
  _QWORD v24[2]; // [rsp+70h] [rbp-29h] BYREF
  __int16 v25; // [rsp+80h] [rbp-19h]
  __int64 v26; // [rsp+88h] [rbp-11h]
  __int64 v27; // [rsp+90h] [rbp-9h]
  __int64 v28; // [rsp+E8h] [rbp+4Fh] BYREF
  struct tagLOGCOLORSPACEW *v29; // [rsp+F0h] [rbp+57h]

  v29 = a3;
  v9 = 0LL;
  v10 = 0LL;
  v14 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  if ( v14 )
  {
    Object = (struct OBJECT *)AllocateObject(32LL, 14LL);
    v16 = Object;
    if ( Object )
    {
      v28 = 0LL;
      v9 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v28, Object, 0xEu, 2);
      if ( v9 )
      {
        *(_QWORD *)this = v16;
        v18 = *(_DWORD *)(v14 + 40);
        v24[1] = 0LL;
        v25 = 256;
        v21 = 0LL;
        v27 = 0LL;
        v26 = 0LL;
        v24[0] = 0LL;
        v23 = 1;
        if ( (v18 & 1) != 0 )
        {
          Gre::Base::Globals(v17);
          *(_QWORD *)&v21 = *(_QWORD *)(v14 + 48);
          v22 = v14;
          GreAcquireSemaphore(v21);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v21, 11LL);
        }
        v19 = *(__int64 (__fastcall **)(_QWORD, struct tagLOGCOLORSPACEW *, void *, _QWORD, void *, unsigned int, void *, unsigned int, _DWORD))(v14 + 3176);
        if ( v19 )
        {
          v10 = v19(*(_QWORD *)(v14 + 1768), v29, a4, a5, a6, a7, a8, a9, 0);
          if ( v10 )
          {
            *(_QWORD *)(*(_QWORD *)this + 24LL) = v10;
            XDCOBJ::bAddColorTransform(a2, v9);
          }
        }
        else
        {
          EngSetLastError(0x57u);
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v21);
        if ( v24[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v24);
      }
      if ( v28 )
        _InterlockedDecrement((volatile signed __int32 *)(v28 + 12));
      if ( v9 )
      {
        if ( !v10 )
        {
          *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
          COLORTRANSFORMOBJ::bDelete(this, a2);
          return 0LL;
        }
      }
      else
      {
        FreeObject(v16, 14LL);
      }
    }
    else
    {
      EngSetLastError(8u);
    }
  }
  return v9;
}
