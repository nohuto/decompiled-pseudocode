/*
 * XREFs of ?vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAUBLENDINFO@@@Z @ 0x1C0092590
 * Callers:
 *     ?vSrcOpaqCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0091D70 (-vSrcOpaqCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcTranCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0092220 (-vSrcTranCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAUBLENDINFO@@H@Z @ 0x1C0273D88 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAUBLENDINFO@@H@Z.c)
 * Callees:
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

void __fastcall vGetBlendInfo(int a1, struct SURFACE *a2, int a3, struct BLENDINFO *a4)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // edx
  int v10; // edi
  int v11; // r12d
  int v12; // r14d
  int v13; // r15d
  int v14; // ebp
  int v15; // esi
  int v16; // r13d
  unsigned int v17; // eax
  unsigned __int8 *v18; // r9
  void *v19; // r10
  int v20; // r8d
  int v21; // edx
  int v22; // ecx
  int *v23; // rdx
  int v24; // [rsp+20h] [rbp-88h]
  _DWORD v25[30]; // [rsp+30h] [rbp-78h] BYREF
  int v26; // [rsp+B8h] [rbp+10h]

  memset_0(v25, 0, 0x40uLL);
  v7 = *((_QWORD *)a2 + 16);
  v8 = *((_QWORD *)a2 + 6);
  if ( !v7 )
    v7 = *(_QWORD *)(v8 + 1776);
  v9 = *(_DWORD *)(v7 + 24);
  if ( (v9 & 2) != 0 )
  {
    v23 = *(int **)(v7 + 112);
    v15 = v23[9] + v23[6] - 8;
    v14 = v23[10] + v23[7] - 8;
    v12 = v23[11] + v23[8] - 8;
    v10 = *v23;
    v13 = v23[1];
    v11 = v23[2];
  }
  else
  {
    v6 = 5LL;
    v10 = 31;
    if ( a1 != 2 )
    {
      v10 = 255;
      v6 = 8LL;
    }
    if ( (v9 & 4) != 0 )
    {
      v13 = v10 << v6;
      v15 = v6 - 8;
      v14 = 2 * v6 - 8;
      v11 = v10 << v6 << v6;
      v12 = v6 + 2 * (v6 - 4);
    }
    else if ( (v9 & 8) != 0 )
    {
      v11 = v10;
      v12 = v6 - 8;
      v13 = v10 << v6;
      v14 = 2 * v6 - 8;
      v10 = v10 << v6 << v6;
      v15 = v6 + 2 * (v6 - 4);
    }
    else
    {
      v11 = v25[8];
      v13 = v25[7];
      v10 = v25[6];
      v12 = v25[5];
      v14 = v25[3];
      v15 = v25[1];
    }
  }
  v16 = 0;
  if ( v15 < 0 )
  {
    v16 = -v15;
    v15 = 0;
  }
  v26 = 0;
  if ( v14 < 0 )
  {
    v26 = -v14;
    v14 = 0;
  }
  v24 = 0;
  if ( v12 < 0 )
  {
    v24 = -v12;
    v12 = 0;
  }
  v17 = *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v6) + 32) + 8584LL);
  if ( v17 == 1200 )
  {
    v17 = *(_DWORD *)(v8 + 2416);
    if ( !v17 )
      goto LABEL_17;
  }
  if ( v17 < 0x44C )
  {
    v18 = (unsigned __int8 *)&unk_1C0310080;
    v19 = &unk_1C0310080;
    goto LABEL_18;
  }
  if ( v17 < 0x4B0 )
  {
    v18 = (unsigned __int8 *)&unk_1C0310180;
    v19 = &unk_1C0310280;
    goto LABEL_18;
  }
  if ( v17 < 0x514 )
  {
LABEL_17:
    v18 = (unsigned __int8 *)&unk_1C030FE80;
    v19 = &unk_1C030FF80;
  }
  else if ( v17 >= 0x578 )
  {
    if ( v17 >= 0x5DC )
    {
      if ( v17 >= 0x640 )
      {
        if ( v17 >= 0x6A4 )
        {
          if ( v17 >= 0x708 )
          {
            if ( v17 >= 0x76C )
            {
              if ( v17 >= 0x7D0 )
              {
                if ( v17 >= 0x834 )
                {
                  if ( v17 >= 0x898 )
                  {
                    v18 = (unsigned __int8 *)&unk_1C0311580;
                    v19 = &unk_1C0311680;
                  }
                  else
                  {
                    v18 = (unsigned __int8 *)&unk_1C0311380;
                    v19 = &unk_1C0311480;
                  }
                }
                else
                {
                  v18 = (unsigned __int8 *)&unk_1C0311180;
                  v19 = &unk_1C0311280;
                }
              }
              else
              {
                v18 = (unsigned __int8 *)&unk_1C0310F80;
                v19 = &unk_1C0311080;
              }
            }
            else
            {
              v18 = (unsigned __int8 *)&unk_1C0310D80;
              v19 = &unk_1C0310E80;
            }
          }
          else
          {
            v18 = (unsigned __int8 *)&unk_1C0310B80;
            v19 = &unk_1C0310C80;
          }
        }
        else
        {
          v18 = (unsigned __int8 *)&unk_1C0310980;
          v19 = &unk_1C0310A80;
        }
      }
      else
      {
        v18 = (unsigned __int8 *)&unk_1C0310780;
        v19 = &unk_1C0310880;
      }
    }
    else
    {
      v18 = (unsigned __int8 *)&unk_1C0310580;
      v19 = &unk_1C0310680;
    }
  }
  else
  {
    v18 = (unsigned __int8 *)&unk_1C0310380;
    v19 = &unk_1C0310480;
  }
LABEL_18:
  v20 = v18[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v10) << v16) >> v15)];
  v21 = v18[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v13) << v26) >> v14)];
  v22 = v18[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v11) << v24) >> v12)];
  *((_DWORD *)a4 + 4) = v24;
  *(_DWORD *)a4 = v16;
  *((_DWORD *)a4 + 1) = v15;
  *((_DWORD *)a4 + 2) = v26;
  *((_DWORD *)a4 + 3) = v14;
  *((_DWORD *)a4 + 5) = v12;
  *((_DWORD *)a4 + 6) = v10;
  *((_DWORD *)a4 + 7) = v13;
  *((_DWORD *)a4 + 8) = v11;
  *((_DWORD *)a4 + 9) = v20;
  *((_DWORD *)a4 + 10) = v21;
  *((_DWORD *)a4 + 11) = v22;
  *((_QWORD *)a4 + 6) = v18;
  *((_QWORD *)a4 + 7) = v19;
}
