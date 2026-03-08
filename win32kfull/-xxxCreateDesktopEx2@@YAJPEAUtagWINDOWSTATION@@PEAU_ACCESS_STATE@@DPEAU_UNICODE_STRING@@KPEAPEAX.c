/*
 * XREFs of ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C00D4724
 * Callers:
 *     EditionParseDesktop @ 0x1C00D45C0 (EditionParseDesktop.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DesktopAlloc @ 0x1C00A09E0 (DesktopAlloc.c)
 *     CreateDesktopHeap @ 0x1C00D4A60 (CreateDesktopHeap.c)
 *     GetDesktopHeapSize @ 0x1C00D4B20 (GetDesktopHeapSize.c)
 */

__int64 __fastcall xxxCreateDesktopEx2(
        struct tagWINDOWSTATION *a1,
        struct _ACCESS_STATE *a2,
        __int64 a3,
        struct _UNICODE_STRING *a4,
        unsigned int a5,
        void **a6)
{
  unsigned __int16 v9; // si
  char v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _KPROCESS *CurrentProcess; // rax
  __int64 result; // rax
  PVOID v16; // rcx
  unsigned int DesktopHeapSize; // edi
  struct tagTHREADINFO *v18; // rax
  __int64 DesktopHeap; // rax
  __int64 v20; // rcx
  PVOID v21; // rsi
  struct tagTHREADINFO *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // r8
  _QWORD *v26; // rax
  __int64 v27; // rcx
  ACCESS_MASK *p_RemainingDesiredAccess; // rbx
  ACCESS_MASK RemainingDesiredAccess; // eax
  PVOID v30; // rdx
  PVOID v31; // rax
  struct tagTHREADINFO *v32; // rax
  unsigned int v33; // [rsp+40h] [rbp-20h]
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  __int64 v35; // [rsp+50h] [rbp-10h] BYREF

  Object = 0LL;
  v33 = 0;
  v9 = 0;
  v10 = 0;
  if ( !(unsigned __int8)ObCheckCreateObjectAccess(a1, 8LL, a2) )
    return v33;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v12, v11, v13);
  if ( (*((_DWORD *)a1 + 16) & 2) != 0 && PsGetProcessId(CurrentProcess) != (HANDLE)gpidLogon )
  {
    v35 = 0LL;
    GetProcessLuid(0LL, &v35);
    if ( v35 == *((_QWORD *)a1 + 22) )
      return 3221226091LL;
  }
  result = CreateDesktopObObject(a4, a1, a2, &Object);
  if ( (int)result >= 0 )
  {
    if ( (*((_DWORD *)a1 + 16) & 4) != 0 )
    {
      v9 = 3;
    }
    else
    {
      v31 = (PVOID)*((_QWORD *)a1 + 2);
      if ( v31 )
      {
        v16 = gspdeskDisconnect;
        if ( gspdeskDisconnect )
        {
          if ( v31 == gspdeskDisconnect )
            v10 = 1;
        }
        else
        {
          v9 = 2;
        }
      }
      else
      {
        v9 = 1;
      }
    }
    if ( a5 )
      DesktopHeapSize = a5 << 10;
    else
      DesktopHeapSize = GetDesktopHeapSize(v9);
    if ( DesktopHeapSize < 0x2000 )
      DesktopHeapSize = 0x2000;
    v18 = PtiCurrentShared((__int64)v16);
    *((_DWORD *)v18 + 318) |= 0x40u;
    DesktopHeap = CreateDesktopHeap((char *)Object + 128, DesktopHeapSize);
    *((_QWORD *)Object + 15) = DesktopHeap;
    if ( *((_QWORD *)Object + 15) )
    {
      *((_DWORD *)Object + 34) = DesktopHeapSize;
      v21 = DesktopAlloc((__int64)Object, 0x48u);
      if ( v21 )
      {
        v22 = PtiCurrentShared(v20);
        *((_DWORD *)v22 + 318) &= ~0x40u;
        v23 = (_QWORD *)Win32AllocPoolZInit(256LL, 1684763477LL);
        if ( v23 )
        {
          *v23 = v21;
          *((_QWORD *)Object + 1) = v23;
          v24 = (char *)Object + 168;
          v25 = ++gdwDesktopId;
          *((_QWORD *)Object + 22) = (char *)Object + 168;
          *v24 = v24;
          v26 = (char *)Object + 304;
          *((_QWORD *)Object + 39) = (char *)Object + 304;
          *v26 = v26;
          if ( v25 == 0xFFFFFFFFLL )
          {
            gdwDesktopId = 1LL;
            LODWORD(v25) = 1;
          }
          ***((_QWORD ***)Object + 1) = (unsigned int)v25 | ((gCookie ^ (unsigned __int64)Object) << 32);
          v27 = *((_QWORD *)Object + 16);
          *((_QWORD *)Object + 2) = v27;
          *((_QWORD *)Object + 3) = v27 + DesktopHeapSize;
          LockObjectAssignment((char *)Object + 40, a1);
          if ( !*((_QWORD *)a1 + 2) )
          {
            if ( (*((_DWORD *)a1 + 16) & 4) == 0 )
              LockObjectAssignment(&grpdeskLogon, Object);
            LockObjectAssignment(*(_QWORD *)(*((_QWORD *)a1 + 7) + 8LL) + 24LL, Object);
          }
          LockObjectAssignment((char *)Object + 32, *((_QWORD *)a1 + 2));
          LockObjectAssignment((char *)a1 + 16, Object);
          p_RemainingDesiredAccess = &a2->RemainingDesiredAccess;
          RemainingDesiredAccess = a2->RemainingDesiredAccess;
          if ( (RemainingDesiredAccess & 0x2000000) != 0 )
            *p_RemainingDesiredAccess = RemainingDesiredAccess & 0xEDFFFFFF | 0x10000000;
          RtlMapGenericMask(&a2->RemainingDesiredAccess, DesktopMapping);
          v30 = Object;
          *p_RemainingDesiredAccess &= DesktopMapping->GenericAll | 0x1000000;
          *a6 = v30;
          if ( v10 )
            LockObjectAssignment(grpdeskIODefault, v30);
          return 0LL;
        }
        RtlFreeHeap(*((PVOID *)Object + 16), 0, v21);
      }
    }
    else
    {
      v20 = gpsi;
      if ( (*gpsi & 0x100) != 0 )
      {
        _InterlockedAnd(gpsi, 0xFFFFFEFF);
        UserLogError(2147483892LL);
      }
    }
    v32 = PtiCurrentShared(v20);
    *((_DWORD *)v32 + 318) &= ~0x40u;
    v33 = -1073741801;
    ObfDereferenceObject(Object);
    return v33;
  }
  return result;
}
