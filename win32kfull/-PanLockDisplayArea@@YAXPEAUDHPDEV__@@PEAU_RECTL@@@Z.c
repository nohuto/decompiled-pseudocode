/*
 * XREFs of ?PanLockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C029EAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0083D50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0088198 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z @ 0x1C029F914 (-ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z.c)
 */

void __fastcall PanLockDisplayArea(struct DHPDEV__ *a1, struct _RECTL *a2)
{
  __int64 v3; // rdx
  unsigned int v4; // r9d
  unsigned int v5; // ecx
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rdi
  _BYTE *v9; // r15
  struct DHPDEV__ *v10; // r12
  __int64 v11; // rax
  __int64 i; // r14
  __int64 v13; // rbx
  HSEMAPHORE *v14; // rdi
  __int64 v15; // r15
  char *v16; // rbx
  HSEMAPHORE *v17; // rdi
  __int64 v18; // r14
  __int128 v19; // [rsp+30h] [rbp-89h] BYREF
  __int64 v20; // [rsp+40h] [rbp-79h]
  _BYTE *v21; // [rsp+48h] [rbp-71h] BYREF
  int v22; // [rsp+50h] [rbp-69h]
  int v23; // [rsp+54h] [rbp-65h]
  __int64 v24; // [rsp+58h] [rbp-61h]
  __int64 v25; // [rsp+60h] [rbp-59h]
  _BYTE v26[80]; // [rsp+70h] [rbp-49h] BYREF
  char v27; // [rsp+C0h] [rbp+7h] BYREF

  v19 = (__int128)*a2;
  ERECTL::vOrder((ERECTL *)&v19);
  v3 = *((_QWORD *)a1 + 8);
  v21 = 0LL;
  v22 = *(_DWORD *)(v3 + 32);
  v23 = *(_DWORD *)(v3 + 36);
  ERECTL::operator*=((int *)&v19, (int *)&v21);
  if ( !ERECTL::bEmpty((ERECTL *)&v19) )
  {
    v4 = *((_DWORD *)a1 + 192);
    v5 = *((_DWORD *)a1 + 193);
    v6 = (int)((unsigned int)v19 / v4);
    v7 = (int)(DWORD1(v19) / v5);
    v25 = v7;
    v24 = (int)(HIDWORD(v19) / v5 + 1);
    v8 = (int)(DWORD2(v19) / v4 + 1);
    v9 = &v26[9 * v7];
    v20 = v8;
    v21 = v9;
    v10 = a1 + 18 * v7 + 2 * v6 + 30;
    *(_QWORD *)&v19 = v10;
LABEL_3:
    memset_0(v26, 0, 0x51uLL);
    KeWaitForSingleObject((PVOID)(*((_QWORD *)a1 + 98) + 32LL), UserRequest, 0, 0, 0LL);
    v11 = v24;
    for ( i = v7; i < v11; ++i )
    {
      v13 = v6;
      if ( v6 < v8 )
      {
        v14 = (HSEMAPHORE *)v10;
        while ( EngAcquireSemaphoreNoWait(*v14) )
        {
          v9[v13] = 1;
          ++v14;
          if ( ++v13 >= v20 )
          {
            v8 = v20;
            v11 = v24;
            goto LABEL_10;
          }
        }
        v15 = 8LL;
        v16 = &v27;
        v17 = (HSEMAPHORE *)(a1 + 190);
        do
        {
          v18 = 9LL;
          do
          {
            if ( *v16 == 1 )
            {
              EngReleaseSemaphore(*v17);
              *v16 = 0;
            }
            --v17;
            --v16;
            --v18;
          }
          while ( v18 );
          --v15;
        }
        while ( v15 >= 0 );
        ShadowUnLockWait((struct _PANDEV *)a1);
        v8 = v20;
        v7 = v25;
        v9 = v21;
        v10 = (struct DHPDEV__ *)v19;
        goto LABEL_3;
      }
LABEL_10:
      v10 += 18;
      v9 += 9;
    }
    KeReleaseMutex((PRKMUTEX)(*((_QWORD *)a1 + 98) + 32LL), 0);
  }
}
