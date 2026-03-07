__int64 __fastcall EmitterShapes::CPathEmitterArea::CreatePathEmitterArea(
        struct ID2D1Geometry *a1,
        struct EmitterShapes::CPathEmitterArea **a2)
{
  struct EmitterShapes::CPathEmitterArea *v4; // rax
  __int64 v5; // r8
  struct EmitterShapes::CPathEmitterArea *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rcx
  struct EmitterShapes::CPathEmitterArea *v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = (struct EmitterShapes::CPathEmitterArea *)operator new(0x30uLL);
  v6 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 0;
    *((_DWORD *)v4 + 4) = 0;
    *(_QWORD *)v4 = &EmitterShapes::CPathEmitterArea::`vftable';
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    v13 = v4;
    ((void (__fastcall *)(struct EmitterShapes::CPathEmitterArea *))*(&EmitterShapes::CPathEmitterArea::`vftable' + 1))(v4);
  }
  else
  {
    v6 = 0LL;
    v13 = 0LL;
  }
  v7 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, __int64, struct EmitterShapes::CPathEmitterArea *))(*(_QWORD *)a1 + 80LL))(
         a1,
         0LL,
         v5,
         v6);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x118u, 0LL);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(struct EmitterShapes::CPathEmitterArea *))(*(_QWORD *)v6 + 32LL))(v6);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x119u, 0LL);
    }
    else
    {
      *a2 = v6;
      (*(void (__fastcall **)(struct EmitterShapes::CPathEmitterArea *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
  return v9;
}
