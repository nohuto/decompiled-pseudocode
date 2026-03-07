__int64 __fastcall DEVLOCKOBJ::bLock(DEVLOCKOBJ *this, DC **a2, int a3)
{
  __int64 v6; // rcx
  int v7; // eax
  int v8; // r13d
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // r8d
  __int64 *v14; // rax
  __int64 v15; // rax
  struct _ERESOURCE *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rcx
  int v20; // r8d
  DC *v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rax
  __int64 *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rcx
  int v36; // r8d
  int v37; // edx
  struct _ERESOURCE *v38; // rcx
  DC *v39; // rbx
  DC *v40; // rcx
  int v41; // eax
  bool v42; // zf
  __int64 *v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rcx
  int v48; // r8d
  __int64 v49; // rbx
  __int64 v50; // rcx
  int v51; // r8d
  __int64 v52; // rbx
  __int64 v53; // rcx
  int v54; // r8d
  __int64 v55; // rbx
  __int64 v56; // rcx
  int v57; // r8d
  struct _ERESOURCE *v58; // rcx
  int v59; // ecx
  int v60; // eax
  __int64 v61; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v64; // rax
  __int64 *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  DC *v69; // rcx
  __int64 v70; // r8
  __int64 v71; // rdx
  struct _ERESOURCE *v72; // rcx
  struct _ERESOURCE *v73; // rbx
  __int64 v74; // r8
  int v75; // edx
  struct _ERESOURCE *v76; // rcx
  struct _ERESOURCE *v77; // rcx
  struct _ERESOURCE *v78; // rcx
  struct _ERESOURCE *v79; // rcx
  struct _DC_ATTR *UserAttr; // rax

  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v6 = *(_QWORD *)*a2;
  *((_QWORD *)this + 9) = v6;
  if ( !a3 )
  {
    if ( !qword_1C02D5DF8
      || (int)qword_1C02D5DF8() < 0
      || !qword_1C02D5E00
      || (v7 = qword_1C02D5E00(a2, (char *)this + 64, (char *)this + 56, (char *)this + 28), v7 != 1) )
    {
      LOBYTE(v7) = 0;
    }
    if ( !(_BYTE)v7 )
      return 0LL;
  }
  if ( qword_1C02D5890 && (int)qword_1C02D5890() >= 0 && qword_1C02D5898 )
    qword_1C02D5898(this, 0LL);
  if ( a3 == 1 )
    *((_DWORD *)this + 6) |= 0x20000u;
  v8 = 0;
  v9 = *(_QWORD *)(SGDGetSessionState(v6) + 24);
  if ( (*((_DWORD *)*a2 + 9) & 0x200) == 0 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread || (v64 = *ThreadWin32Thread) == 0 || !*(_DWORD *)(v64 + 104) )
    {
      *((_DWORD *)this + 6) |= 0x800000u;
      v65 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v65 )
      {
        v66 = *v65;
        if ( v66 )
          ++*(_DWORD *)(v66 + 104);
      }
    }
    goto LABEL_51;
  }
  *((_QWORD *)this + 1) = *(_QWORD *)(v9 + 80);
  v10 = *(_QWORD *)(v9 + 80);
  if ( v10 )
    ExEnterPriorityRegionAndAcquireResourceShared();
  v11 = *(_QWORD *)(v9 + 80);
  v12 = *(_QWORD *)(SGDGetSessionState(v10) + 24);
  if ( *(_DWORD *)(v12 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v12,
      (unsigned int)&LockAcquireShared,
      v13,
      v11,
      (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
  *((_DWORD *)this + 6) |= 8u;
  v14 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !v14 || (v15 = *v14) == 0 || !*(_DWORD *)(v15 + 104) )
  {
    v16 = *(struct _ERESOURCE **)(v9 + 120);
    if ( !ExIsResourceAcquiredExclusiveLite(v16) && !ExIsResourceAcquiredSharedLite(v16) )
    {
      v17 = *(_QWORD *)(v9 + 120);
      if ( v17 )
        ExEnterPriorityRegionAndAcquireResourceShared();
      v18 = *(_QWORD *)(v9 + 120);
      v19 = *(_QWORD *)(SGDGetSessionState(v17) + 24);
      if ( *(_DWORD *)(v19 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(
          v19,
          (unsigned int)&LockAcquireShared,
          v20,
          v18,
          (__int64)L"GreBaseGlobals.hsemGreLock");
      v8 = 1;
    }
  }
  v21 = *a2;
  v22 = *((_QWORD *)*a2 + 6);
  v23 = **((unsigned int **)*a2 + 122);
  if ( (v23 & 1) != 0 || (*((_DWORD *)v21 + 9) & 0x8000) != 0 )
  {
    v24 = *(_DWORD *)(v22 + 40);
    if ( (v24 & 1) != 0 && (v24 & 0x1000000) == 0 )
    {
      if ( *(_DWORD *)(v22 + 2588) == 5
        || (v24 & 0x20000) != 0
        || (v23 = *(_QWORD *)(v22 + 2552), ((v23 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0)
        && (*(_DWORD *)(v23 + 160) & 0x800000) != 0 )
      {
        v25 = *(_QWORD *)(v22 + 24);
        v26 = *(_QWORD *)(SGDGetSessionState(v23) + 24);
        if ( (*(_DWORD *)(v22 + 2096) & 0x400) == 0
          && (*(_DWORD *)(v22 + 40) & 0x48000000) == 0
          && (*(_DWORD *)(v22 + 1792) & 0x8000000) == 0
          && (*(_DWORD *)(v25 + 40) & 0x1000000) == 0
          && *(_DWORD *)(v26 + 6360) )
        {
          goto LABEL_38;
        }
      }
    }
    v21 = *a2;
  }
  v70 = *((_QWORD *)v21 + 8);
  *(_QWORD *)this = v70;
  *((_QWORD *)this + 2) = *((_QWORD *)*a2 + 6);
  if ( v8 == 1 )
  {
    v71 = *(_QWORD *)(v9 + 120);
    if ( v70 == v71 )
    {
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock", v71);
      v72 = *(struct _ERESOURCE **)(v9 + 120);
      if ( v72 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v72);
        PsLeavePriorityRegion();
      }
      v8 = 0;
    }
  }
  v73 = *(struct _ERESOURCE **)this;
  if ( *(_QWORD *)this )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v73);
  }
  v74 = 11LL;
  if ( *(_QWORD *)this == *(_QWORD *)(v9 + 120) )
    v74 = 2LL;
  EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v74);
  v75 = *((_DWORD *)this + 6);
  if ( (v75 & 0x200) == 0 && (*((_DWORD *)*a2 + 9) & 0x4000) != 0 )
    *((_DWORD *)this + 6) = v75 | 0x200;
LABEL_38:
  v27 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !v27 || (v28 = *v27) == 0 || !*(_DWORD *)(v28 + 104) )
  {
    *((_DWORD *)this + 6) |= 0x1000u;
    v29 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v29 )
    {
      v30 = *v29;
      if ( v30 )
      {
        *(_QWORD *)(v30 + 320) = 0LL;
        *(_QWORD *)(v30 + 312) = 0LL;
      }
    }
    v31 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v31 )
    {
      v32 = *v31;
      if ( v32 )
        ++*(_DWORD *)(v32 + 104);
    }
    v33 = *(_QWORD *)(v9 + 88);
    if ( v33 )
      ExEnterPriorityRegionAndAcquireResourceShared();
    v34 = *(_QWORD *)(v9 + 88);
    v35 = *(_QWORD *)(SGDGetSessionState(v33) + 24);
    if ( *(_DWORD *)(v35 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v35,
        (unsigned int)&LockAcquireShared,
        v36,
        v34,
        (__int64)L"GreBaseGlobals.hsemDCVisRgn");
  }
  v37 = *((_DWORD *)*a2 + 9);
  if ( (v37 & 0x1000) != 0 && (v37 & 0x4000) == 0 )
  {
    if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn", *(_QWORD *)(v9 + 88));
      v76 = *(struct _ERESOURCE **)(v9 + 88);
      if ( v76 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v76);
        PsLeavePriorityRegion();
      }
    }
    *((_DWORD *)this + 6) &= ~1u;
    if ( !v8 )
      return 0LL;
LABEL_137:
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock", *(_QWORD *)(v9 + 120));
    v77 = *(struct _ERESOURCE **)(v9 + 120);
    if ( !v77 )
      return 0LL;
    goto LABEL_149;
  }
LABEL_51:
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    if ( (*((_DWORD *)*a2 + 9) & 0x80000) != 0 )
    {
      if ( *((_QWORD *)this + 1) )
      {
        EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn", *(_QWORD *)(v9 + 88));
        v78 = *(struct _ERESOURCE **)(v9 + 88);
        if ( v78 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v78);
          PsLeavePriorityRegion();
        }
      }
      *((_DWORD *)this + 6) &= ~1u;
      if ( !v8 )
        return 0LL;
      goto LABEL_137;
    }
  }
  else if ( *((_QWORD *)this + 1) )
  {
    goto LABEL_54;
  }
  if ( (*((_DWORD *)*a2 + 9) & 0x10) != 0 && !(unsigned int)DC::bCompute(*a2) )
  {
    if ( *((_QWORD *)this + 1) )
    {
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn", *(_QWORD *)(v9 + 88));
      v79 = *(struct _ERESOURCE **)(v9 + 88);
      if ( v79 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v79);
        PsLeavePriorityRegion();
      }
    }
    *((_DWORD *)this + 6) &= ~1u;
    if ( !v8 )
      return 0LL;
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock", *(_QWORD *)(v9 + 120));
    v77 = *(struct _ERESOURCE **)(v9 + 120);
    if ( !v77 )
      return 0LL;
LABEL_149:
    ExReleaseResourceAndLeaveCriticalRegion(v77);
    PsLeavePriorityRegion();
    return 0LL;
  }
LABEL_54:
  v38 = (struct _ERESOURCE *)*((unsigned int *)this + 6);
  if ( ((unsigned int)v38 & 0x20000) == 0 )
  {
    v39 = *a2;
    if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 && ((unsigned __int16)v38 & 0x1000) != 0 )
    {
      if ( !*((_QWORD *)this + 7) )
      {
        v40 = (*((_DWORD *)v39 + 10) & 1) != 0 ? (DC *)((char *)v39 + 1024) : (DC *)((char *)v39 + 1016);
        *((_DWORD *)v39 + 256) = *(_DWORD *)v40;
        *((_DWORD *)v39 + 257) = *((_DWORD *)v40 + 1);
        *((_DWORD *)v39 + 262) = *((_DWORD *)v39 + 258);
        *((_DWORD *)v39 + 263) = *((_DWORD *)v39 + 259);
        *((_DWORD *)v39 + 264) = *((_DWORD *)v39 + 260);
        v41 = *((_DWORD *)v39 + 261);
        *((_DWORD *)v39 + 10) |= 1u;
        v42 = (*((_DWORD *)v39 + 9) & 0x4000) == 0;
        *((_DWORD *)v39 + 265) = v41;
        if ( !v42 )
        {
          v67 = *((_QWORD *)v39 + 62);
          if ( *(_QWORD *)(v67 + 248) || (*(_DWORD *)(v67 + 116) & 1) != 0 )
          {
            KeWaitForSingleObject((PVOID)(*(_QWORD *)(v67 + 312) + 64LL), UserRequest, 0, 0, 0LL);
            ++*(_DWORD *)(*((_QWORD *)v39 + 62) + 324LL);
            KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(*((_QWORD *)v39 + 62) + 312LL) + 64LL), 0);
          }
        }
      }
      v43 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v43 )
      {
        v44 = *v43;
        if ( *v43 )
        {
          *(_QWORD *)(v44 + 312) = (char *)this + 32;
          if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
          {
            *(_DWORD *)(v44 + 328) |= 1u;
            *((_QWORD *)*a2 + 247) = 0LL;
            v45 = *(_QWORD *)(v9 + 96);
            if ( v45 )
              ExEnterPriorityRegionAndAcquireResourceShared();
            v46 = *(_QWORD *)(v9 + 96);
            v47 = *(_QWORD *)(SGDGetSessionState(v45) + 24);
            if ( *(_DWORD *)(v47 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
              McTemplateK0pz_EtwWriteTransfer(
                v47,
                (unsigned int)&LockAcquireShared,
                v48,
                v46,
                (__int64)L"GreBaseGlobals.hsemVisRgnUniqueness");
            *(_DWORD *)(v44 + 336) = *(_DWORD *)(v9 + 6516);
            v49 = *(_QWORD *)(v9 + 96);
            v50 = *(_QWORD *)(SGDGetSessionState(v47) + 24);
            if ( *(_DWORD *)(v50 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
              McTemplateK0pz_EtwWriteTransfer(
                v50,
                (unsigned int)&LockRelease,
                v51,
                v49,
                (__int64)L"GreBaseGlobals.hsemVisRgnUniqueness");
            v38 = *(struct _ERESOURCE **)(v9 + 96);
            if ( v38 )
            {
              ExReleaseResourceAndLeaveCriticalRegion(v38);
              PsLeavePriorityRegion();
            }
          }
        }
      }
    }
  }
  if ( *((_QWORD *)this + 1) && (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    v52 = *(_QWORD *)(v9 + 88);
    v53 = *(_QWORD *)(SGDGetSessionState(v38) + 24);
    if ( *(_DWORD *)(v53 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v53,
        (unsigned int)&LockRelease,
        v54,
        v52,
        (__int64)L"GreBaseGlobals.hsemDCVisRgn");
    v38 = *(struct _ERESOURCE **)(v9 + 88);
    if ( v38 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v38);
      PsLeavePriorityRegion();
    }
  }
  if ( v8 )
  {
    v55 = *(_QWORD *)(v9 + 120);
    v56 = *(_QWORD *)(SGDGetSessionState(v38) + 24);
    if ( *(_DWORD *)(v56 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(v56, (unsigned int)&LockRelease, v57, v55, (__int64)L"GreBaseGlobals.hsemGreLock");
    v58 = *(struct _ERESOURCE **)(v9 + 120);
    if ( v58 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v58);
      PsLeavePriorityRegion();
    }
  }
  if ( (*((_DWORD *)this + 6) & 0x20000) != 0 )
    return 1LL;
  if ( qword_1C02D5890 && (int)qword_1C02D5890() >= 0 )
  {
    if ( qword_1C02D5898 )
      v59 = qword_1C02D5898(this, a2);
    else
      v59 = 0;
    v60 = *((_DWORD *)this + 6);
    if ( v59 )
    {
      if ( (v60 & 0x1000) == 0 && (v60 & 0x800000) == 0 )
        return 1LL;
      v61 = *((_QWORD *)this + 4);
      if ( v61 )
        goto LABEL_87;
      XDCOBJ::vLockIgnoreAttributes((DEVLOCKOBJ *)((char *)this + 32), *(HDC *)*a2);
      v68 = *((_QWORD *)this + 4);
      if ( v68 )
      {
        if ( (*(_DWORD *)(v68 + 44) & 2) != 0 )
          goto LABEL_105;
        if ( *((_DWORD *)this + 11)
          || (UserAttr = XDCOBJ::GetUserAttr((DEVLOCKOBJ *)((char *)this + 32))) == 0LL
          || (unsigned int)DC::SaveAttributes(*((DC **)this + 4), UserAttr) )
        {
          *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) |= 2u;
          *((_DWORD *)this + 10) = 1;
LABEL_105:
          v69 = (DC *)*((_QWORD *)this + 4);
          if ( (*((_DWORD *)v69 + 130) & 4) != 0 )
            DC::vMarkTransformDirty(v69);
          goto LABEL_107;
        }
        _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 4) + 12LL));
        *((_QWORD *)this + 4) = 0LL;
      }
LABEL_107:
      v61 = *((_QWORD *)this + 4);
      if ( !v61 )
        return 1LL;
      *((_BYTE *)this + 49) = 0;
LABEL_87:
      *(_DWORD *)(v61 + 40) |= 2u;
      *((_BYTE *)this + 48) = 1;
      return 1LL;
    }
  }
  else
  {
    v60 = *((_DWORD *)this + 6);
  }
  *((_DWORD *)this + 6) = v60 & 0xFFFFFFFE;
  return 0LL;
}
