/*
 * XREFs of ??_G?$__func@V_lambda_e664ca33da6e2184fee4274c0d8dddbf_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAPEAXI@Z @ 0x180160080
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$__base@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAA@XZ @ 0x18008CE24 (--1-$__base@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func<_lambda_e664ca33da6e2184fee4274c0d8dddbf_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`scalar deleting destructor'(
        _QWORD *Block,
        char a2)
{
  wistd::__function::__base<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::~__base<long (unsigned short *,unsigned __int64,unsigned __int64 *)>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
