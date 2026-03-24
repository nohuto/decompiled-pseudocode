/*
 * XREFs of NtQueryCompositionSurfaceStatistics @ 0x1C00174A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000FAAC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceStatistics(HANDLE Handle, unsigned __int64 a2)
{
  _QWORD **v4; // rdi
  NTSTATUS v5; // ebx
  _QWORD **v6; // r14
  bool v7; // sf
  _QWORD **v8; // r14
  signed int v9; // r8d
  __int64 v10; // rdx
  char v11; // al
  _QWORD **v12; // rbx
  _QWORD **v13; // rcx
  NTSTATUS v15; // [rsp+30h] [rbp-A8h]
  __int128 v16; // [rsp+38h] [rbp-A0h]
  __int128 v17; // [rsp+48h] [rbp-90h]
  __int128 v18; // [rsp+58h] [rbp-80h]
  __int64 v19; // [rsp+68h] [rbp-70h]
  __int128 v20; // [rsp+78h] [rbp-60h]
  __int128 v21; // [rsp+88h] [rbp-50h]
  __int128 v22; // [rsp+98h] [rbp-40h]
  PVOID Object; // [rsp+F0h] [rbp+18h] BYREF
  _QWORD **v24; // [rsp+F8h] [rbp+20h]

  v20 = 0LL;
  v16 = 0LL;
  v21 = 0LL;
  v17 = 0LL;
  v22 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  KeEnterCriticalRegion();
  v4 = 0LL;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(Handle, 1u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
  v6 = (_QWORD **)Object;
  if ( v5 < 0 )
    goto LABEL_38;
  if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v6[2] + 16LL))(v6[2]) == 1 )
      v4 = v6;
    else
      v5 = -1073741788;
  }
  else
  {
    v5 = -1073741816;
  }
  v7 = v5 < 0;
  if ( v5 < 0 )
  {
    ObfDereferenceObject(v6);
LABEL_38:
    v7 = v5 < 0;
  }
  if ( v7 )
    v4 = 0LL;
  if ( v5 >= 0 )
  {
    v8 = 0LL;
    v24 = 0LL;
    v5 = ObReferenceObjectByPointer(v4, 3u, g_pDxgkCompositionObjectType, 0);
    if ( v5 < 0 )
    {
LABEL_14:
      if ( v5 >= 0 )
      {
        v9 = -1073741823;
        v10 = 0LL;
        if ( *((_DWORD *)v8 + 20) && *((_BYTE *)v8[8] + 16) )
          v10 = (__int64)(v8[8] - 3);
        if ( v10 )
        {
          v11 = *(_BYTE *)(v10 + 41);
          if ( v11 )
          {
            v16 = *(_OWORD *)(v10 + 168);
            v17 = *(_OWORD *)(v10 + 184);
            v18 = *(_OWORD *)(v10 + 200);
            v19 = *(_QWORD *)(v10 + 216);
          }
          v9 = v11 == 0 ? 0xC0000001 : 0;
        }
        if ( v9 < 0 )
        {
          v16 = 0LL;
          v17 = 0LL;
          v18 = 0LL;
          v19 = 0LL;
        }
        v15 = v9;
        v12 = v24;
        v13 = v24 + 2;
        if ( KeGetCurrentThread() == (struct _KTHREAD *)v24[3] )
        {
          v24[3] = 0LL;
          ExReleasePushLockExclusiveEx(v13, 0LL);
        }
        else
        {
          ExReleasePushLockSharedEx(v13, 0LL);
        }
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v12 - 5);
        v5 = v15;
        v22 = v18;
        v21 = v17;
        v20 = v16;
      }
      ObfDereferenceObject(v4);
      goto LABEL_28;
    }
    v5 = 0;
    if ( ((unsigned __int8 (__fastcall *)(_QWORD **))*v4[6])(v4 + 6) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v4 + 7, 0LL);
      if ( ((unsigned __int8 (__fastcall *)(_QWORD **))*v4[6])(v4 + 6) )
        goto LABEL_12;
      CPushLock::ReleaseLock((CPushLock *)(v4 + 6));
    }
    v5 = -1073741816;
LABEL_12:
    if ( v5 < 0 )
    {
      ObfDereferenceObject(v4);
    }
    else
    {
      v8 = v4 + 5;
      v24 = v4 + 5;
    }
    goto LABEL_14;
  }
LABEL_28:
  if ( a2 )
  {
    if ( a2 + 56 < a2 || a2 + 56 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a2 = v20;
    *(_OWORD *)(a2 + 16) = v21;
    *(_OWORD *)(a2 + 32) = v22;
    *(_QWORD *)(a2 + 48) = v19;
  }
  else
  {
    v5 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
