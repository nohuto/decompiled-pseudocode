/*
 * XREFs of DifDeregisterPlugin @ 0x1405D2840
 * Callers:
 *     DifDeregisterAllPlugins @ 0x1405D27E8 (DifDeregisterAllPlugins.c)
 *     DifRegisterPlugin @ 0x1405D2C50 (DifRegisterPlugin.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ViUnbindDifThunk @ 0x1405CCD84 (ViUnbindDifThunk.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DifDeregisterPlugin(unsigned int a1)
{
  __int64 v1; // r12
  int v2; // eax
  __int64 *v3; // rdi
  __int64 *v4; // r14
  _QWORD *v5; // rbp
  _QWORD *v6; // rbx
  _DWORD *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rsi
  _QWORD *v11; // rbx
  _DWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  __int64 *v15; // rax
  __int64 **v16; // rcx
  int v17; // edx
  int v18; // edx
  _QWORD *v19; // rbx
  void (*v20)(void); // rax

  v1 = a1;
  if ( a1 < 0x40 )
  {
    v2 = *((_DWORD *)&VfRuleClasses + ((unsigned __int64)a1 >> 5));
    if ( _bittest(&v2, a1 & 0x1F) )
    {
      v3 = (__int64 *)DifAPIThunkContextHead;
      while ( v3 != &DifAPIThunkContextHead )
      {
        v4 = v3 - 2;
        v5 = v3 + 2;
        v6 = (_QWORD *)*v5;
        while ( v6 != v5 )
        {
          v7 = v6 - 2;
          v8 = v6;
          v6 = (_QWORD *)*v6;
          if ( *v7 == (_DWORD)v1 )
          {
            if ( (_QWORD *)v6[1] != v8 )
              goto LABEL_33;
            v9 = (_QWORD *)v8[1];
            if ( (_QWORD *)*v9 != v8 )
              goto LABEL_33;
            *v9 = v6;
            v6[1] = v9;
            *v8 = 0LL;
            v8[1] = 0LL;
            ExFreePoolWithTag(v7, 0x4E666944u);
          }
        }
        v10 = v4 + 6;
        v11 = (_QWORD *)v4[6];
        while ( v11 != v10 )
        {
          v12 = v11 - 2;
          v13 = v11;
          v11 = (_QWORD *)*v11;
          if ( *v12 == (_DWORD)v1 )
          {
            if ( (_QWORD *)v11[1] != v13 )
              goto LABEL_33;
            v14 = (_QWORD *)v13[1];
            if ( (_QWORD *)*v14 != v13 )
              goto LABEL_33;
            *v14 = v11;
            v11[1] = v14;
            *v13 = 0LL;
            v13[1] = 0LL;
            ExFreePoolWithTag(v12, 0x4E666944u);
          }
        }
        v15 = v3;
        v3 = (__int64 *)*v3;
        if ( (_QWORD *)*v5 == v5 && (_QWORD *)*v10 == v10 )
        {
          if ( (__int64 *)v3[1] != v15 || (v16 = (__int64 **)v15[1], *v16 != v15) )
LABEL_33:
            __fastfail(3u);
          *v16 = v3;
          v3[1] = (__int64)v16;
          *v15 = 0LL;
          v15[1] = 0LL;
          if ( !ViUnbindDifThunk((__int64)&VfDifThunks, *((_DWORD *)v4 + 2))
            && !ViUnbindDifThunk((__int64)&VfPoolThunks, v17) )
          {
            ViUnbindDifThunk((__int64)&VfRegularThunks, v18);
          }
          if ( *v4 )
          {
            ExFreePoolWithTag((PVOID)*v4, 0x4E666944u);
            *v4 = 0LL;
          }
          ExFreePoolWithTag(v4, 0x4E666944u);
        }
      }
      v19 = (_QWORD *)DifPluginSettings[v1];
      if ( v19 )
      {
        v20 = (void (*)(void))v19[1];
        if ( v20 )
          v20();
        ExFreePoolWithTag(v19, 0x4E666944u);
        DifPluginSettings[v1] = 0LL;
      }
      DifPluginStates[v1] = 0;
    }
  }
  return 0LL;
}
