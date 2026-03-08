/*
 * XREFs of ?DpiKsrSaveMemoryCallback@@YAJPEAU_FDO_CONTEXT@@PEAX@Z @ 0x1C03A11C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?DpiDxgkDdiSaveMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_SAVEMEMORYFORHOTUPDATE@@@Z @ 0x1C03A0E30 (-DpiDxgkDdiSaveMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_SAVEMEMORYFORHOTUPDATE@@@Z.c)
 */

__int64 __fastcall DpiKsrSaveMemoryCallback(
        struct _FDO_CONTEXT *a1,
        const struct _DXGKARG_SAVEMEMORYFORHOTUPDATE *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // ecx
  int v18; // [rsp+48h] [rbp+10h] BYREF

  v5 = *((unsigned int *)a2 + 8);
  if ( (int)v5 < 0 )
    return (unsigned int)v5;
  if ( *((_QWORD *)a2 + 2) )
  {
    if ( (*((_DWORD *)a1 + 1366) & 2) != 0 )
    {
      v7 = DpiDxgkDdiSaveMemoryForHotUpdate(a1, a2, a3);
      v5 = v7;
      *((_DWORD *)a2 + 8) = v7;
      if ( v7 < 0 )
      {
        WdLogSingleEntry1(2LL, v7);
        return *((unsigned int *)a2 + 8);
      }
    }
  }
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    LOBYTE(v5) = 1;
    KsrFreePersistedMemory((char *)a1 + 4800, v5);
    KsrFreePersistedMemory((char *)a1 + 4816, 0LL);
    return *((unsigned int *)a2 + 8);
  }
  if ( (int)v5 >= 0 )
  {
    if ( !*((_QWORD *)a2 + 2) )
    {
      v14 = *(_QWORD *)(*((_QWORD *)a1 + 489) + 2928LL);
      v15 = 0;
      if ( v14 && (v18 = 0, (v16 = *(_QWORD *)(v14 + 1864)) != 0) )
      {
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v16 + 32LL))(v16, 0LL, 0LL, &v18);
        v15 = v18;
      }
      else
      {
        v17 = 0;
      }
      *((_DWORD *)a2 + 8) = v17;
      if ( !v15 )
        return *((unsigned int *)a2 + 8);
      *((_DWORD *)a2 + 2) += v15 + 32;
      goto LABEL_25;
    }
    v8 = *((_DWORD *)a2 + 2);
    if ( v8 > 0x20 )
    {
      v9 = *((_QWORD *)a2 + 3);
      v10 = v8 - 32;
      v11 = *(_QWORD *)(*((_QWORD *)a1 + 489) + 2928LL);
      v12 = 0;
      v18 = 0;
      if ( v11 )
      {
        v13 = *(_QWORD *)(v11 + 1864);
        if ( v13 )
        {
          LODWORD(v13) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, int *))(*(_QWORD *)v13 + 32LL))(
                           v13,
                           v10,
                           v9 + 32,
                           &v18);
          v12 = v18;
        }
        *((_DWORD *)a2 + 8) = v13;
        if ( (int)v13 < 0 )
          return *((unsigned int *)a2 + 8);
      }
      else
      {
        *((_DWORD *)a2 + 8) = 0;
      }
      if ( v12 )
      {
        *(_OWORD *)v9 = *((_OWORD *)a1 + 300);
        *(_QWORD *)(v9 + 16) = *((_QWORD *)a1 + 334);
        *(_DWORD *)(v9 + 28) = v18;
        *((_QWORD *)a2 + 3) += (unsigned int)(v18 + 32);
LABEL_25:
        ++*((_DWORD *)a2 + 1);
      }
    }
  }
  return *((unsigned int *)a2 + 8);
}
