/*
 * XREFs of ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x18005FD20
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18003A6A8 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18003E8A0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     memcpy_0 @ 0x180091327 (memcpy_0.c)
 */

__int64 __fastcall ARI::ProcessToken::SysAppId::GetAppUserModelId(
        ARI::ProcessToken::SysAppId *this,
        const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned __int16 *v4; // rdi
  unsigned int v6; // esi
  __int64 v8; // rax
  int v9; // ebp
  int v10; // r15d
  wchar_t *v11; // rax
  _BYTE *v12; // r13
  __int64 v13; // rax
  int v14; // edi
  size_t v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // ebp
  int v18; // eax
  _WORD *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 result; // rax
  _WORD *v24; // rbx
  unsigned int v25; // [rsp+60h] [rbp+8h]

  v4 = (unsigned __int16 *)*((_QWORD *)this + 4);
  v6 = (unsigned int)a2;
  v8 = v4[8] >> 1;
  v9 = v8 + 1;
  if ( (_DWORD)v8 != -1 )
  {
    v10 = *v4 >> 1;
    v11 = wcschr(*((const wchar_t **)v4 + 1), 0x5Fu);
    v12 = (_BYTE *)*((_QWORD *)v4 + 1);
    v13 = ((char *)(v11 + 1) - v12) >> 1;
    v14 = v13 + 14;
    v25 = v13 + 13;
    if ( v6 < (int)v13 + 14 )
    {
      v17 = v14 + v9;
    }
    else
    {
      v15 = 2LL * (unsigned int)v13;
      memcpy_0(a4, v12, v15);
      v16 = (unsigned int)(v10 - 13);
      v17 = v14 + v9;
      *(_OWORD *)((char *)a4 + v15) = *(_OWORD *)&v12[2 * v16];
      *(_QWORD *)((char *)a4 + v15 + 16) = *(_QWORD *)&v12[2 * v16 + 16];
      *(_WORD *)((char *)a4 + v15 + 24) = *(_WORD *)&v12[2 * v16 + 24];
      *((_WORD *)a4 + v25) = 0;
      if ( v6 >= v17 )
      {
        v18 = v14 - 1;
        v19 = (_WORD *)a4 + v25;
        *v19 = 33;
        v20 = *((_QWORD *)this + 4);
        v21 = *(unsigned __int16 *)(v20 + 16) >> 1;
        if ( v6 - v18 - 1 >= (int)v21 + 1 )
        {
          v22 = v21;
          memcpy_0(v19 + 1, *(const void **)(v20 + 24), 2 * v21);
          v19[v22 + 1] = 0;
        }
        result = 0LL;
        goto LABEL_7;
      }
    }
    result = 122LL;
LABEL_7:
    *a3 = v17;
    return result;
  }
  v24 = (_WORD *)(2 * v8);
  memcpy_0(0LL, *((const void **)v4 + 3), 2 * v8);
  *v24 = 0;
  return 0LL;
}
