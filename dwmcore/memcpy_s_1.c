/*
 * XREFs of memcpy_s_1 @ 0x180250EFC
 * Callers:
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x180250A64 (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 * Callees:
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_1(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  int *v8; // rax
  errno_t v9; // ebx

  if ( !SourceSize )
    return 0;
  if ( !Destination )
    goto LABEL_4;
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  memset_0(Destination, 0, DestinationSize);
  if ( !Source )
  {
LABEL_4:
    v8 = _errno();
    v9 = 22;
LABEL_5:
    *v8 = v9;
    _invalid_parameter_noinfo();
    return v9;
  }
  if ( DestinationSize < SourceSize )
  {
    v8 = _errno();
    v9 = 34;
    goto LABEL_5;
  }
  return 22;
}
