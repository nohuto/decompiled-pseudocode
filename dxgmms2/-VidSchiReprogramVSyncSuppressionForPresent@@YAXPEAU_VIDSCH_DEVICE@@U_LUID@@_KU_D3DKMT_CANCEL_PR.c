void __fastcall VidSchiReprogramVSyncSuppressionForPresent(_QWORD *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v4; // r13
  __int64 v6; // r15
  char v7; // si
  BOOL v8; // ebx
  unsigned int v10; // edi
  _QWORD *i; // r8
  _QWORD *v12; // rdx
  __int64 *k; // rcx
  _QWORD *j; // rdx
  int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned int v18; // r9d
  struct VIDSCH_FLIP_QUEUE *v19; // r8
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  __int64 **v24; // rdx
  __int64 *m; // rcx
  int v26; // [rsp+30h] [rbp-49h]
  unsigned int v27; // [rsp+50h] [rbp-29h]
  _BYTE v28[4]; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v29; // [rsp+5Ch] [rbp-1Dh]
  unsigned int v30; // [rsp+60h] [rbp-19h]
  __int64 v31; // [rsp+68h] [rbp-11h]
  _QWORD v32[4]; // [rsp+70h] [rbp-9h] BYREF
  __int16 v33; // [rsp+90h] [rbp+17h]
  unsigned int v34; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v35; // [rsp+E8h] [rbp+6Fh]
  unsigned int v36; // [rsp+F8h] [rbp+7Fh]

  v35 = a2;
  v4 = a1[4];
  v6 = 0LL;
  v36 = 0;
  LOBYTE(v27) = 0;
  v7 = 0;
  v34 = 0;
  v33 = 0;
  v8 = a4 & 1;
  v32[0] = v4 + 1728;
  v10 = a2;
  AcquireSpinLock::Acquire((Acquire *)v32);
  for ( i = (_QWORD *)a1[11]; ; i = (_QWORD *)*i )
  {
    if ( i == a1 + 11 )
    {
      for ( j = (_QWORD *)a1[9]; j != a1 + 9; j = (_QWORD *)*j )
      {
        for ( k = (__int64 *)j[80]; k != j + 80; k = (__int64 *)*k )
        {
          if ( *((_DWORD *)k + 4) == 7 && *((_DWORD *)k + 88) == a3 )
            goto LABEL_13;
        }
        for ( k = (__int64 *)j[82]; k != j + 82; k = (__int64 *)*k )
        {
          if ( *((_DWORD *)k + 4) == 7 && *((_DWORD *)k + 88) == a3 )
            goto LABEL_13;
        }
      }
      v15 = 0;
      if ( *(int *)(v4 + 3512) >= 0 )
      {
        do
        {
          v16 = v6 + *(_QWORD *)(v4 + 3328);
          if ( *(_QWORD *)v16 == __PAIR64__(HIDWORD(v35), v10) && (unsigned int)(*(_DWORD *)(v16 + 112) - 1) <= 1 )
          {
            VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
              (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)v28,
              (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v16);
            v18 = v29;
            v36 = v29;
            v27 = *(_DWORD *)(v31 + 4LL * v30);
            v19 = *(struct VIDSCH_FLIP_QUEUE **)(*(_QWORD *)(v4 + 8LL * v29 + 3200) + 8LL * v27 + 40);
            if ( v19 )
            {
              v20 = *(_DWORD *)(v17 + 112);
              if ( v20 == 2 )
              {
                VidSchiReprogramVSyncSuppressionForFlipEntry(
                  (struct _VIDSCH_GLOBAL *)v4,
                  v29,
                  v27,
                  (struct _VIDSCH_DEVICE *)v29,
                  v19,
                  a3,
                  v8,
                  &v34);
                v7 = v34;
                if ( v34 )
                  break;
              }
              else if ( v20 == 1 )
              {
                v24 = (__int64 **)(v17 + 120);
                for ( m = *v24; m != (__int64 *)v24; m = (__int64 *)*m )
                {
                  if ( *((_DWORD *)m + 40) == a3 )
                  {
                    v7 = 4;
                    *((_DWORD *)m + 13) = *((_DWORD *)m + 13) & 0xFFFFFEFF | (!v8 << 8);
                    LODWORD(v6) = v18;
                    goto LABEL_33;
                  }
                }
              }
            }
          }
          ++v15;
          v6 += 160LL;
        }
        while ( v15 <= *(_DWORD *)(v4 + 3512) );
        LODWORD(v6) = v36;
      }
      goto LABEL_33;
    }
    v12 = (_QWORD *)i[4];
LABEL_9:
    if ( v12 != i + 4 )
      break;
  }
  for ( k = (__int64 *)v12[19]; ; k = (__int64 *)*k )
  {
    if ( k == v12 + 19 )
    {
      v12 = (_QWORD *)*v12;
      goto LABEL_9;
    }
    if ( *((_DWORD *)k + 4) == 7 && *((_DWORD *)k + 88) == a3 )
      break;
  }
LABEL_13:
  v7 = 3;
  *((_DWORD *)k + 61) = *((_DWORD *)k + 61) & 0xFFFFFEFF | (!v8 << 8);
LABEL_33:
  AcquireSpinLock::Release((AcquireSpinLock *)v32);
  if ( (byte_1C00769C4 & 1) != 0 )
    McTemplateK0qqxxxq_EtwWriteTransfer(v22, v21, v23, v6, v27, v10, v26, a3, v7);
  AcquireSpinLock::Release((AcquireSpinLock *)v32);
}
