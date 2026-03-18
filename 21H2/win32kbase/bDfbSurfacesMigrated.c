/*
 * XREFs of bDfbSurfacesMigrated @ 0x1C00626A0
 * Callers:
 *     pProcessDfbSurfaces2 @ 0x1C0061C30 (pProcessDfbSurfaces2.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F08C (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0063C24 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MulFindDisplayDhsurfFromMetaSurf @ 0x1C016EE28 (MulFindDisplayDhsurfFromMetaSurf.c)
 */

__int64 __fastcall bDfbSurfacesMigrated(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int v5; // r11d
  HSURF v6; // r12
  __int64 (__fastcall *v7)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD); // r10
  __int64 DisplayDhsurfFromMetaSurf; // r13
  __int64 v9; // rbx
  int v10; // r15d
  _QWORD *i; // rdx
  _QWORD *v13; // rdx
  _QWORD *j; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  _BYTE v17[32]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v18; // [rsp+70h] [rbp-10h]
  __int64 (__fastcall *v19)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD); // [rsp+C0h] [rbp+40h] BYREF
  _QWORD *v20; // [rsp+C8h] [rbp+48h]
  _QWORD *v21; // [rsp+D0h] [rbp+50h]

  v2 = 0;
  if ( (*(_DWORD *)(a2 + 112) & 0x800000) != 0 )
  {
    v5 = *(_DWORD *)(a1 + 40);
    if ( (v5 & 0x20000) != 0 )
    {
      for ( i = **(_QWORD ***)(a1 + 1768); i; i = (_QWORD *)*i )
      {
        if ( *(_DWORD *)(*(_QWORD *)(i[6] + 1760LL) + 24LL) != 1 )
          return v2;
      }
    }
    v6 = 0LL;
    if ( (*(_DWORD *)(a1 + 1792) & 0x8000000) == 0 )
    {
      v7 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))(a1 + 3416);
      v19 = v7;
      if ( v7 )
      {
        DisplayDhsurfFromMetaSurf = *(_QWORD *)(a2 + 24);
        if ( _bittest((const signed __int32 *)(*(_QWORD *)(a2 + 48) + 40LL), 0x11u) )
        {
          DisplayDhsurfFromMetaSurf = MulFindDisplayDhsurfFromMetaSurf();
          if ( !DisplayDhsurfFromMetaSurf )
            return v2;
          v7 = v19;
        }
        v9 = *(_QWORD *)(a2 + 56);
        v10 = *(_DWORD *)(a2 + 120);
        v19 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))(a2 + 568);
        if ( (v5 & 0x4000000) != 0 )
        {
          v13 = *(_QWORD **)(a1 + 1768);
          v21 = v13;
          for ( j = (_QWORD *)*v13; ; j = (_QWORD *)*v20 )
          {
            v20 = j;
            if ( !j || v6 )
              break;
            v13[13] = *(_QWORD *)(*(_QWORD *)(j[7] + 2552LL) + 248LL);
            v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, _DWORD, _DWORD, _QWORD *))(a1 + 3416))(
                    *(_QWORD *)(a1 + 1768),
                    v9,
                    *(unsigned int *)(a2 + 96),
                    v10 | 0x10u,
                    DisplayDhsurfFromMetaSurf,
                    *(_DWORD *)(a2 + 124),
                    0,
                    &v19);
            v13 = v21;
            v6 = (HSURF)v15;
          }
        }
        else
        {
          v6 = (HSURF)v7(
                        *(_QWORD *)(a1 + 1768),
                        v9,
                        *(unsigned int *)(a2 + 96),
                        v10 | 0x10u,
                        DisplayDhsurfFromMetaSurf,
                        *(_DWORD *)(a2 + 124),
                        0,
                        &v19);
        }
        SURFREF::SURFREF((SURFREF *)v17, v6);
        v16 = v18;
        if ( v18 )
        {
          *(_QWORD *)(a2 + 560) = v18;
          if ( (*(_DWORD *)(v16 + 116) & 0x2000) != 0 )
            *(_DWORD *)(a2 + 116) |= 0x2000u;
          *(_DWORD *)(v16 + 120) = v10;
          if ( (*(_DWORD *)(a1 + 40) & 0x20000) == 0 )
          {
            if ( (v10 & 1) != 0 )
            {
              *(_DWORD *)(v18 + 116) |= 1u;
              *(_QWORD *)(v18 + 568) = v19;
              *(_QWORD *)(v18 + 576) = *(_QWORD *)(a2 + 576);
              *(_DWORD *)(v18 + 124) = *(_DWORD *)(a2 + 124);
            }
            else if ( (v10 & 2) != 0 )
            {
              *(_DWORD *)(v18 + 116) |= 8u;
            }
            *(_DWORD *)(v18 + 112) |= 0x800000u;
            *(_DWORD *)(v18 + 112) |= 0x4000000u;
            *(_DWORD *)(v18 + 112) |= 0x4000u;
          }
        }
        SURFREF::~SURFREF((SURFREF *)v17);
        if ( v6 )
          return 1;
      }
    }
  }
  return v2;
}
