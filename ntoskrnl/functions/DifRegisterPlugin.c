__int64 __fastcall DifRegisterPlugin(__int64 a1, unsigned int a2, unsigned int a3, _OWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  _OWORD *v6; // rdi
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rdi
  int v10; // r9d
  __int64 *APIThunkContextById; // rsi
  __int64 v12; // rsi
  void *Pool2; // rax
  int v14; // edx
  void *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // r15
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 **v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  char v29; // al
  __int64 APIThunkContext; // rax
  __int64 *v31; // rax
  __int64 **v32; // rdx
  __int64 v33; // rax
  __int64 **v34; // rcx
  __int64 *v35; // rax
  __int64 v36; // rdx
  _OWORD *v37; // rax
  __int64 v39; // [rsp+70h] [rbp+8h]
  unsigned int v41; // [rsp+80h] [rbp+18h]

  v39 = a1;
  v4 = 0;
  v5 = a3;
  v6 = a4;
  if ( a3 < 0x40 )
  {
    v7 = *((_DWORD *)&VfRuleClasses + ((unsigned __int64)a3 >> 5));
    if ( _bittest(&v7, a3 & 0x1F) )
    {
      if ( !DifPluginStates[a3] )
      {
        v41 = 0;
        v8 = 0;
        if ( a2 )
        {
          while ( 1 )
          {
            v9 = a1 + 32LL * v8;
            if ( (unsigned __int8)VfCheckDifDdiExist(*(unsigned int *)(v9 + 8)) )
            {
              APIThunkContextById = DifGetAPIThunkContextById(v10);
              if ( APIThunkContextById )
              {
                if ( *(_QWORD *)(v9 + 16) )
                {
                  APIThunkContext = DifCreateAPIThunkContext(v9, 1, v5);
                  if ( !APIThunkContext )
                    goto LABEL_44;
                  v31 = (__int64 *)(APIThunkContext + 16);
                  v32 = (__int64 **)APIThunkContextById[5];
                  if ( *v32 != APIThunkContextById + 4 )
                    goto LABEL_39;
                  *v31 = (__int64)(APIThunkContextById + 4);
                  v31[1] = (__int64)v32;
                  *v32 = v31;
                  APIThunkContextById[5] = (__int64)v31;
                }
                if ( *(_QWORD *)(v9 + 24) )
                {
                  v33 = DifCreateAPIThunkContext(v9, 0, v5);
                  if ( !v33 )
                    goto LABEL_44;
                  v34 = (__int64 **)(APIThunkContextById + 6);
                  v35 = (__int64 *)(v33 + 16);
                  v36 = APIThunkContextById[6];
                  if ( *(__int64 **)(v36 + 8) != APIThunkContextById + 6 )
LABEL_39:
                    __fastfail(3u);
                  *v35 = v36;
                  v35[1] = (__int64)v34;
                  *(_QWORD *)(v36 + 8) = v35;
                  *v34 = v35;
                }
              }
              else
              {
                v12 = -1LL;
                do
                  ++v12;
                while ( *(_BYTE *)(*(_QWORD *)v9 + v12) );
                Pool2 = (void *)ExAllocatePool2(64LL, v12 + 1, 1883334212LL);
                v15 = Pool2;
                if ( !Pool2 )
                  goto LABEL_44;
                memmove(Pool2, *(const void **)v9, v12 + 1);
                v16 = ExAllocatePool2(64LL, 64LL, 1883334212LL);
                v17 = v16;
                if ( !v16 )
                {
                  v4 = -1073741801;
                  ExFreePoolWithTag(v15, 0x4E666944u);
                  goto LABEL_45;
                }
                *(_QWORD *)v16 = v15;
                v18 = v16 + 32;
                v19 = v16 + 48;
                *(_DWORD *)(v16 + 8) = *(_DWORD *)(v9 + 8);
                *(_QWORD *)(v16 + 40) = v16 + 32;
                *(_QWORD *)(v16 + 32) = v16 + 32;
                *(_QWORD *)(v16 + 56) = v16 + 48;
                *(_QWORD *)(v16 + 48) = v16 + 48;
                if ( *(_QWORD *)(v9 + 16) )
                {
                  v20 = DifCreateAPIThunkContext(v9, 1, v5);
                  if ( !v20 )
                    goto LABEL_36;
                  v21 = *(__int64 ***)(v18 + 8);
                  v22 = (__int64 *)(v20 + 16);
                  if ( *v21 != (__int64 *)v18 )
                    goto LABEL_39;
                  *v22 = v18;
                  v22[1] = (__int64)v21;
                  *v21 = v22;
                  *(_QWORD *)(v18 + 8) = v22;
                }
                if ( *(_QWORD *)(v9 + 24) )
                {
                  v23 = DifCreateAPIThunkContext(v9, 0, v5);
                  if ( !v23 )
                  {
LABEL_36:
                    ExFreePoolWithTag(v15, 0x4E666944u);
                    ExFreePoolWithTag((PVOID)v17, 0x4E666944u);
                    goto LABEL_44;
                  }
                  v24 = *(_QWORD *)v19;
                  v25 = (_QWORD *)(v23 + 16);
                  if ( *(_QWORD *)(*(_QWORD *)v19 + 8LL) != v19 )
                    goto LABEL_39;
                  *v25 = v24;
                  v25[1] = v19;
                  *(_QWORD *)(v24 + 8) = v25;
                  *(_QWORD *)v19 = v25;
                }
                v26 = (_QWORD *)qword_140C364E8;
                v27 = (_QWORD *)(v17 + 16);
                if ( *(__int64 **)qword_140C364E8 != &DifAPIThunkContextHead )
                  goto LABEL_39;
                *v27 = &DifAPIThunkContextHead;
                *(_QWORD *)(v17 + 24) = v26;
                *v26 = v27;
                qword_140C364E8 = v17 + 16;
                v28 = *(unsigned int *)(v17 + 8);
                if ( (unsigned int)v28 >= 0x10000000 )
                  v29 = VfBindDifCallbackWrappers(v28, off_140C075B8[(unsigned int)(v28 - 0x10000000)], v17);
                else
                  v29 = VfBindDifDDIWrappers(v28, *(&off_140C076C8 + v28), v17);
                if ( !v29 )
                {
                  DifiDbgPrint("Binding failure for 0x%x\n", *(_DWORD *)(v17 + 8));
                  v4 = -1073738625;
                  goto LABEL_45;
                }
              }
            }
            else
            {
              DifiDbgPrint("API %d is not available for the plugin %d.\n", v10, v5);
            }
            v8 = v41 + 1;
            v41 = v8;
            if ( v8 >= a2 )
              break;
            a1 = v39;
          }
          v6 = a4;
        }
        if ( !v6 )
        {
          v37 = 0LL;
LABEL_47:
          DifPluginSettings[v5] = (__int64)v37;
          DifPluginStates[v5] = 1;
          return v4;
        }
        v37 = (_OWORD *)ExAllocatePool2(64LL, 16LL, 1883334212LL);
        if ( v37 )
        {
          *v37 = *v6;
          goto LABEL_47;
        }
LABEL_44:
        v4 = -1073741801;
LABEL_45:
        DifiDbgPrint("Loading plugin %d failed!!!\n", v14);
        DifDeregisterPlugin(v5);
      }
    }
  }
  return v4;
}
