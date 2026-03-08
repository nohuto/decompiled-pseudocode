/*
 * XREFs of ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x180079590
 * Callers:
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x180030748 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x180078B10 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18007B750 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x18007B894 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?first@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x18007B8CC (-first@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 *     ?size@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@QEBA_KXZ @ 0x1800A970C (-size@-$vector_facade@PEAVIDeviceResource@@V-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@.c)
 *     ?consume@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEAAX_J@Z @ 0x1800A987C (-consume@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEAAX_J@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180129C00 (--$uninitialized_move@V-$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CDrawListCache::ReleaseDrawListEntries(CDrawListCache *this)
{
  _QWORD *v1; // rsi
  __int64 v2; // rdi
  __int64 v4; // r14
  int v5; // eax
  char *v6; // rbx
  char *v7; // rdi
  __int64 v8; // rcx
  char *v9; // rdi
  __int64 v10; // rax
  char *v11; // rbx
  __int64 v12; // rcx
  char *v13; // rbx
  __int64 v14; // rcx
  char *v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // rdi
  int v18; // eax
  char *v19; // rbx
  char *v20; // rdi
  __int64 v21; // rax
  char *v22; // rdi
  __int64 v23; // rax
  char *v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rbp
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rbp
  __int64 v30; // r9
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r9
  int v35; // eax
  __int64 v36; // rax
  int v37; // eax
  int v38; // eax
  __int64 v39; // r15
  char *v40; // rdx
  __int64 v41; // rcx
  unsigned __int64 v42; // rdi
  __int64 v43; // rax
  int v44; // eax
  int v45; // eax
  int v46; // ecx
  int v47; // ecx
  int v48; // eax
  unsigned __int64 v49; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v50; // [rsp+28h] [rbp-50h]
  __int64 v51; // [rsp+30h] [rbp-48h]
  _BYTE v52[32]; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  v2 = *((_QWORD *)this + 7);
  v4 = 1LL;
  v5 = v2 & 3;
  if ( v5 != 2 )
  {
    if ( v5 == 1 )
    {
      v6 = (char *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
      v7 = (char *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
    }
    else
    {
      v6 = (char *)this + 56;
      v7 = (char *)this + 56;
      if ( !v5 )
      {
        v8 = 1LL;
        v6 = (char *)this + 56;
        goto LABEL_4;
      }
      v44 = v5 - 1;
      if ( v44 )
      {
        if ( v44 != 2 )
          ModuleFailFastForHRESULT(2147549183LL, retaddr);
        goto LABEL_3;
      }
    }
    v8 = *(_QWORD *)(detail::pointer_buffer_impl<IDeviceResource *>::first((char *)this + 56) - 16);
    goto LABEL_4;
  }
  v6 = 0LL;
  v7 = 0LL;
LABEL_3:
  v8 = 0LL;
LABEL_4:
  v9 = &v7[8 * v8];
  while ( v6 != v9 )
  {
    v39 = *(_QWORD *)v6;
    if ( this )
      v40 = (char *)this + 16;
    else
      v40 = 0LL;
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)v6 + 48LL))(*(_QWORD *)v6, v40);
    v41 = v39 + *(int *)(*(_QWORD *)(v39 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    v6 += 8;
  }
  v10 = *((_QWORD *)this + 7) & 3LL;
  if ( (_DWORD)v10 == 2 )
  {
    v11 = 0LL;
LABEL_8:
    v12 = 0LL;
    goto LABEL_9;
  }
  if ( (_DWORD)v10 == 1 )
  {
    v11 = (char *)(*((_QWORD *)this + 7) & 0xFFFFFFFFFFFFFFFCuLL);
  }
  else
  {
    v11 = (char *)this + 56;
    if ( !(_DWORD)v10 )
    {
      v12 = 1LL;
      goto LABEL_9;
    }
    v45 = v10 - 1;
    if ( v45 )
    {
      if ( v45 != 2 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      goto LABEL_8;
    }
  }
  v12 = *(_QWORD *)(detail::pointer_buffer_impl<IDeviceResource *>::first((char *)this + 56) - 16);
LABEL_9:
  v13 = &v11[8 * v12];
  v14 = *((_QWORD *)this + 7) & 3LL;
  if ( (_DWORD)v14 == 2 )
  {
    v15 = 0LL;
    goto LABEL_11;
  }
  if ( !(_DWORD)v14 )
    goto LABEL_83;
  v46 = v14 - 1;
  if ( v46 )
  {
    if ( v46 != 2 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
LABEL_83:
    v15 = (char *)this + 56;
    goto LABEL_11;
  }
  v15 = (char *)(*((_QWORD *)this + 7) & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_11:
  v16 = (v13 - v15) >> 3;
  if ( v16 )
  {
    v42 = detail::vector_facade<IDeviceResource *,detail::pointer_buffer_impl<IDeviceResource *>>::size((char *)this + 56);
    if ( v16 > v42 )
    {
LABEL_118:
      std::_Xoverflow_error("overflow");
      __debugbreak();
      goto LABEL_119;
    }
    v43 = detail::pointer_buffer_impl<IDeviceResource *>::first((char *)this + 56);
    if ( v16 != v42 )
    {
      v49 = v43;
      v50 = v42;
      v51 = 0LL;
      ((void (__fastcall *)(_BYTE *, unsigned __int64, unsigned __int64, unsigned __int64 *))std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>)(
        v52,
        v43 + 8 * v16,
        v43 + 8 * v42,
        &v49);
    }
    detail::pointer_buffer_impl<IDeviceResource *>::consume((char *)this + 56, -(__int64)v16);
  }
  v17 = *((_QWORD *)this + 6);
  v1 = (_QWORD *)((char *)this + 48);
  v18 = v17 & 3;
  if ( (v17 & 3) == 0 )
    goto LABEL_40;
  if ( (*((_DWORD *)this + 12) & 3) != 1 )
  {
    if ( (*((_DWORD *)this + 12) & 3) == 2 )
    {
      v19 = 0LL;
      goto LABEL_46;
    }
    if ( (*((_DWORD *)this + 12) & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
LABEL_40:
    v19 = (char *)this + 48;
    if ( (v17 & 3) == 0 )
      goto LABEL_48;
    if ( v18 == 1 )
      goto LABEL_15;
    if ( v18 != 2 )
    {
LABEL_48:
      v20 = (char *)this + 48;
      if ( !v18 )
      {
        v21 = 1LL;
        goto LABEL_17;
      }
      v37 = v18 - 1;
      if ( !v37 )
        goto LABEL_16;
      if ( (unsigned int)(v37 - 1) >= 2 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
LABEL_47:
      v21 = 0LL;
      goto LABEL_17;
    }
LABEL_46:
    v20 = 0LL;
    goto LABEL_47;
  }
  v19 = (char *)(v17 & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_15:
  v20 = (char *)(v17 & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_16:
  v21 = *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first((char *)this + 48) - 16);
LABEL_17:
  v22 = &v20[8 * v21];
  while ( v19 != v22 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v19 + 8LL))(*(_QWORD *)v19);
    v19 += 8;
  }
  v23 = *v1 & 3LL;
  if ( (*v1 & 3) != 0 )
  {
    if ( (*(_DWORD *)v1 & 3) == 1 )
    {
      v24 = (char *)(*v1 & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_23:
      v25 = *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first((char *)this + 48) - 16);
      goto LABEL_24;
    }
    if ( (*(_DWORD *)v1 & 3) == 2 )
    {
      v24 = 0LL;
LABEL_58:
      v25 = 0LL;
      goto LABEL_24;
    }
    if ( (*(_DWORD *)v1 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
  v24 = (char *)this + 48;
  if ( (_DWORD)v23 )
  {
    v38 = v23 - 1;
    if ( !v38 )
      goto LABEL_23;
    if ( (unsigned int)(v38 - 1) > 1 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    goto LABEL_58;
  }
  v25 = 1LL;
LABEL_24:
  v26 = *v1;
  v27 = *v1 & 3LL;
  if ( (*v1 & 3) == 0 )
  {
LABEL_61:
    v28 = (unsigned __int64)v1;
    goto LABEL_27;
  }
  if ( (*(_DWORD *)v1 & 3) == 1 )
  {
    v28 = v26 & 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_27;
  }
  if ( (*(_DWORD *)v1 & 3) != 2 )
  {
    if ( (*(_DWORD *)v1 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    goto LABEL_61;
  }
  v28 = 0LL;
LABEL_27:
  v16 = (__int64)&v24[8 * v25 - v28] >> 3;
  if ( !v16 )
    return;
  if ( (_DWORD)v27 == 1 )
  {
    v29 = v26 & 0xFFFFFFFFFFFFFFFCuLL;
    v4 = *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(v1) - 16);
    goto LABEL_30;
  }
  if ( (_DWORD)v27 == 2 )
  {
    v29 = 0LL;
  }
  else
  {
    v29 = (unsigned __int64)v1;
    if ( !(_DWORD)v27 )
      goto LABEL_30;
    if ( (unsigned int)(v27 - 2) >= 2 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
  v4 = 0LL;
LABEL_30:
  v30 = *v1;
  v31 = *v1 & 3LL;
  if ( (_DWORD)v31 == 1 )
  {
    v32 = v30 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (_DWORD)v31 == 2 )
  {
    v32 = 0LL;
  }
  else
  {
    v32 = (unsigned __int64)v1;
  }
  v33 = (__int64)(v29 + 8 * v4 - v32) >> 3;
  if ( v16 > v33 )
    goto LABEL_118;
  if ( (_DWORD)v31 != 1 )
  {
    if ( !(_DWORD)v31 )
    {
LABEL_68:
      v34 = (unsigned __int64)v1;
      goto LABEL_35;
    }
LABEL_119:
    v47 = v31 - 2;
    if ( !v47 )
    {
      v34 = 0LL;
      goto LABEL_35;
    }
    if ( v47 != 1 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    goto LABEL_68;
  }
  v34 = v30 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_35:
  if ( v16 != v33 )
  {
    v49 = v34;
    v50 = v33;
    v51 = 0LL;
    ((void (__fastcall *)(_BYTE *, unsigned __int64, unsigned __int64, unsigned __int64 *))std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>)(
      v52,
      v34 + 8 * v16,
      v34 + 8 * v33,
      &v49);
  }
  v35 = *(_DWORD *)v1 & 3;
  if ( v35 == 1 )
  {
    v36 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v1);
    *(_QWORD *)(v36 - 16) -= v16;
  }
  else
  {
    if ( !v35 )
      goto LABEL_70;
    v48 = v35 - 2;
    if ( v48 )
    {
      if ( v48 != 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      if ( v16 != -1LL )
LABEL_70:
        *v1 = 2LL;
    }
  }
}
